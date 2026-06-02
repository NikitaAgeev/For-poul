#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

#include <qsort_smp.h>

void print_mass (uint16_t* mass, size_t length)
{
    if(mass == NULL)
    {
        printf("Can't print NULL array");
        return;
    }

    printf("{%u", *mass);
    for(size_t i=1; i < length; i++)
    {
        printf(", %u", mass[i]);
    }
    printf("}");

    return;
}

void main ()
{
    const size_t length = 10;
    int16_t* mass = (uint16_t*)malloc(length * sizeof(uint16_t));
    int16_t* out_mass = (uint16_t*)malloc(length * sizeof(uint16_t));

    if((mass == NULL) || (out_mass == NULL))
    {
        printf("MEM_ERR\n");
        return;
    }

    for(size_t i = 0; i < length; i ++)
    {
        mass[i] = rand();
    }

    printf("Start mass: ");
    print_mass(mass, length);
    printf("\n");

    smp_qsort(mass, out_mass, length);

    printf("End mass: ");
    print_mass(out_mass, length);
    printf("\n");

    return;

}
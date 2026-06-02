#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

#include <qsort_smp.h>

void swap(uint16_t* a, uint16_t* b) {
    uint16_t temp = *a;
    *a = *b;
    *b = temp;
}

int smp_qsort (uint16_t* in, uint16_t* out, size_t length, size_t* stack_start, size_t* stack_stop)
{
    size_t i = 0;
    uint16_t pivot = 0;

    if (in == NULL)
    {
        printf("in is null\n");
        return 1;
    }

    if (out == NULL)
    {
        printf("out is null\n");
        return 1;
    }

    for(i = 0; i < length; i++)
    {
        out[i] = in[i];
    }

    size_t tale = 0;
    
    if((stack_start == NULL) | (stack_stop == NULL))
    {
        printf("can't create iternal stack\n");
        return 1;
    }

    stack_start[tale] = 0;
    stack_stop[tale] = length - 1;
    tale++;

    size_t j = 0;
    while(tale != 0){
        size_t start = stack_start[tale - 1];
        size_t stop = stack_stop[tale - 1];
        tale --;
        #ifdef D_INF
        printf("%lu: start = %lu, stop = %lu", tale, start, stop);
        getchar();
        #endif
        pivot = out[stop];
        #ifdef D_INF
        printf("pivot:%u\n", pivot);
        #endif
        i = start;
        for(i = start; (i < stop) & (out[i] <= pivot); i++);

        if(i < stop){
            for(j = i + 1; j <= stop; j++)
            {
                if(out[j] <= pivot)
                {
                    #ifdef D_INF
                    printf("swap: i:%lu(%u), j:%lu(%u)\n", i, out[i], j, out[j]);
                    #endif
                    swap(out + i, out + j);
                    i++;
                }
                else
                {
                    #ifdef D_INF
                    printf("no swap: i:%lu(%u), j:%lu(%u)\n", i, out[i], j, out[j]);
                    #endif
                }
                
            }
            i--;
        }

        #ifdef D_INF
            printf("end_i: %lu\n", i);
        #endif
        
        if((start != i - 1) & (start != i))
        {
            stack_start[tale] = start;
            stack_stop[tale] = i - 1;
            tale++;
        }
        if((stop != i + 1) & (stop != i))
        {
            stack_start[tale] = i + 1;
            stack_stop[tale] = stop;
            tale++;
        }

    }
}
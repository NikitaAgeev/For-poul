#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>


void calc (const uint8_t in [], uint8_t out []);

void main(){
    uint8_t in[] = {0};
    uint8_t  out[] = {0};
    
    for(uint8_t i = 0; i < 16; i++)
    {
        in[0] = i;
        calc (in, out);
        printf("%u, %u, %u, %u: %u, %u, %u\n", (in[0] >> 3) & 1, (in[0] >> 2) & 1, (in[0] >> 1) & 1, (in[0] >> 0) & 1, (out[0] >> 2) & 1, (out[0] >> 1) & 1, (out[0] >> 0) & 1);
    }

}
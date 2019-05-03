#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>

#define max 1000

int main()
{
    int64_t sum = 0;
    for(int i = 0; i < max; i++) {
        if((i%5==0)||(i%3==0)) {
            sum += i;
        }
    }
    printf("\nResult = %I64d\n", sum);
    getchar();
    return 0;
}

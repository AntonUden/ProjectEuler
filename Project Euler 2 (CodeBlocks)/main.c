#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stdint.h>

int main()
{
    int64_t sum = 0;
    int a = 1;
    int b = 1;
    while(a < 4000000) {
        if(!(a % 2)) {
            sum += a;
        }
        printf("%i ", a);
        int c = a;
        a = b;
        b = c+b;
    }
    printf("\n%I64d\n", sum);
    for(;;) getchar();
    return 0;
}

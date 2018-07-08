#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <limits.h>
#include <stdint.h>

int main()
{
    bool found = false;
    for(int64_t i = 1; i < INT_MAX && !found; i++) {
        found = true;
        for(int j = 2; j <= 20; j++) {
            if((i%j)) {
                found = false;
                break;
            }
        }
        if(found) {
            printf("\nNumber found : %I64d\n", i);
        }
    }
    while(true) getchar();
    return 0;
}

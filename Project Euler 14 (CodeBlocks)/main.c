#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stdint.h>

#define MAX 1000000

int64_t collatz(int64_t number) {
    int length = 1;
    while(number != 1) {
        if((number %2) == 0) {
            number = number / 2;
        } else {
            number = (number * 3) + 1;
        }
        length++;
    }
    return length;
}

int main()
{
    int64_t largestLength = 0;
    int64_t largestNumber = 0;

    for(int i = 1; i < MAX; i++) {
        int64_t n = collatz(i);
        if(n > largestLength) {
            largestLength = n;
            largestNumber = i;
        }
    }
    printf("\n Result: %I64d. with length: %I64d\n", largestNumber, largestLength);
    getchar();
    return 0;
}

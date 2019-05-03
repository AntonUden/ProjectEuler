#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>
#include <math.h>

#define MaxNumber 2000000

// My solution to projecteuler 10
// https://projecteuler.net/problem=10
int main()
{
    int64_t result = 0;
    for(int i = 0; i < MaxNumber; i++) {
        if(isPrime(i)) {
            result += i;
        }
    }
    printf("\nSum of all primes below %i is %I64d", MaxNumber, result);
    getchar();
    return 0;
}

int isPrime(int n){
    int i;

    if (n==2)
        return 1;

    if (n%2==0)
        return 0;
    if (n < 2)
        return 0;
    for (i=3;i<=sqrt(n);i+=2)
        if (n%i==0)
            return 0;

    return 1;
}

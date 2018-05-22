#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stdint.h>

#define nPrimes 10001

int main()
{
    int primesFound = 0;
    int i = 0;

    while(primesFound < nPrimes) {
        i++;
        if(isPrime(i)) {
            primesFound++;
        }
    }
    printf("\nResult: %i", i);

    while(true) getchar();

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

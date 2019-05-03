#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    int largest = -1;
    for(int i = 999; i >= 100; i--) {
        for(int j = 999; j >= 100; j--) {
            if(isPalin(i * j)) {
                if((i * j) > largest) {
                    largest = (i * j);
                }
            }
        }
    }
    printf("Largest palindrome = %i\n", largest);
    getchar();
    return 0;
}

int isPalin(int i){
    char a[100], b[100];
    sprintf(a,"%i", i);

    strcpy(b,a);
    strrev(b);

    if (strcmp(a,b) == 0)
        return 1;
    else
        return 0;
}

#include <iostream>
#include <string.h>
#include <vector>

#define START 10

bool isPermutation(int i, int j) {
    int numbers[10] = {0};
    int t = i;
    while(t > 0) {
        numbers[t%10]++;
        t/=10;
    }
    t=j;
    while(t > 0) {
        numbers[t%10]--;
        t/=10;
    }
    for (int k = 0; k < 10; k++) {
        if (numbers[k] != 0) {
            return false;
        }
    }

    return true;
}

int main()
{
    for(int i = START;;i++) {
        bool found = true;
        for(int j = 2; j <= 6; j++) {
            if(!isPermutation(i, i * j)) {
                found = false;
                //break;
            }
        }
        if(found) {
            std::cout << i << std::endl;
            break;
        }
    }
    return 0;
}

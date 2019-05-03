#include <iostream>

int main()
{
    for(int i = 1000; i > 0; i--) {
        int a = 1;
        int b = 2;
        int c = 3;

        for(a = 1; a < b; a++) {
            for(b = 2; b < c; b++) {
                for(c= 3; c < 10000; c++) {
                    int abc = a+b+c;
                    if(abc==1000 && a * a + b * b == c * c) {
                        std::cout << a * b * c << std::endl;
                        return 0;
                    }
                }
            }
        }
    }

    return 0;
}

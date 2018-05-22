#include <iostream>
#include <cmath>

int FastSum(int n)
{
    int sum = 1;
    int sqr = (int) sqrt(n);
    for (int i = 2; i <= 1 + sqr; i++)
        if (n % i == 0) sum = sum + i + n / i;
            return sum;
}

unsigned int sum_amicable_pairs(unsigned int low, unsigned int high) {
    unsigned int a = low, b, sum = 0;
    while(a <= high) {
        b = FastSum(a);
        if(b > a && FastSum(b) == a) sum = sum + a + b;
        a++;
    }
    return sum;
}

int main(int argc, char *argv[])
{
    std::cout << sum_amicable_pairs(1, 10000) << std::endl;
    return 0;
}

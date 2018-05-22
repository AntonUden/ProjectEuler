#include <QCoreApplication>
#include <iostream>

#define MAX 100

int main()
{
    int sumOfSquares = 0;
    int sum = 0;
    for(int i = 1; i <= MAX; i++) {
        sumOfSquares += (int) pow(i, 2);
        sum+=i;
    }

    std::cout << "Sum of squares = " << sumOfSquares << std::endl;
    std::cout << "Square of sums = " << (int) pow(sum, 2) << std::endl;
    std::cout << "Result = " << ((int) pow(sum, 2)) - sumOfSquares << std::endl;
}

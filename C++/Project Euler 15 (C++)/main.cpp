#include <iostream>

#define gridSize 20

int main()
{
    int64_t paths = 1;

    for(int i = 0; i < gridSize ; i++) {
        paths *= (2 * gridSize ) - i;
        paths /= i + 1;
    }

    std::cout << paths << std::endl;
    return 0;
}

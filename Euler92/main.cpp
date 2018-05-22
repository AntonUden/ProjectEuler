#include <iostream>

#define TARGET 10000000

bool endsIn89(int i) {
    if(i == 89)
        return true;
    if(i == 1)
        return false;
    int n = 0;
    while(i > 0) {
        int digit = i % 10;
        n+=digit*digit;
        i /= 10;
    }
    return endsIn89(n);
}

int main(int argc, char *argv[])
{
    int result = 0;
    for(int i = 1; i <= TARGET; i++) {
        if(endsIn89(i))
            result++;
    }
    std::cout << result << std::endl;
    return 0;
}

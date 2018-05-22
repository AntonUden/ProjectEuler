#include <iostream>
#include <string>
using namespace std;

long Fac(int n) {
    if(n <= 0)
        return 1;
    return n*Fac(n-1);
}

int main()
{
    string numStr = to_string(Fac(100));
    cout << numStr << " " << Fac(10) << endl;
    return 0;
}

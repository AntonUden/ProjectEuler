#include <iostream>
#include <string>
#include <sstream>
#include <math.h>

using namespace std;

#define maxN 1000000

std::string NumberToString(int Number)
{
    std::ostringstream ss;
    ss << Number;
    return ss.str();
}

bool isPrime( unsigned int x )
{
    if( x < 2 )			// 0 and 1 aren't prime
        return	false;
    if( x == 2 )
        return	true;	// 2 is

    // make a check for division by 2 first - this eliminates ALL even divisors
    if( !(x % 2) )	return false;
    // now we can check odd divisors starting with 3
    // and the divisor can't be bigger than sqrt(x)
    unsigned int	upper = sqrt(x);
    for( unsigned int i = 3; i <= upper; i += 2 )
        if( !(x % i) )
            return	false;
    return true;
}

bool isCircularPrime(int number)
{
    bool result = true;
    string n = NumberToString(number);
    for(int y = 0; y < n.length(); y++)
    {
        string version = "";
        for(int x = 0; x < n.length(); x++)
        {
            string st = n + n + n;
            version += st.at(x + y);
        }
        stringstream s(version);
        int versionInt = 0;
        s >> versionInt;
        if(!isPrime(versionInt))
        {
            result = false;
            break;
        }
    }
    return result;
}

int main()
{
    int nCount = 0;
    for(int i = 0; i < maxN; i++)
    {
        if(isCircularPrime(i))
        {
            nCount++;
            cout << i << " ";
        }
    }
    cout << endl << nCount << " Circular primes found below " << maxN << endl;
    getwchar();
    return 0;
}

#include <iostream>
#include <string>

using namespace std;

const string EMPTY = "";

const string X[] = { EMPTY, "One ", "Two ", "Three ", "Four ", "Five ",
                "Six ", "Seven ", "Eight ", "Nine ", "Ten ", "Eleven ",
                "Twelve ", "Thirteen ", "Fourteen ", "Fifteen ",
                "Sixteen ", "Seventeen ", "Eighteen ", "Nineteen " };

const string Y[] = { EMPTY, EMPTY, "Twenty ", "Thirty ", "Forty ", "Fifty ",
                "Sixty ", "Seventy ", "Eighty ", "Ninety " };
string convert2digit(int n, string suffix)
{
    if (n == 0) {
        return EMPTY;
    }

    if (n > 19) {
        return Y[n / 10] + X[n % 10] + suffix;
    }
    else {
        return X[n] + suffix;
    }
}
string numberToWords(unsigned long long int n)
{
    // string to store word representation of given number
    string res;

    // this handles digits at ones & tens place
    res = convert2digit((n % 100), "");

    if (n > 100 && n % 100) {
        res = "and " + res;
    }

    res = convert2digit(((n / 100) % 10), "Hundred ") + res;
    res = convert2digit(((n / 1000) % 100), "Thousand ") + res;
    res = convert2digit(((n / 100000) % 100), "Lakh, ") + res;
    res = convert2digit((n / 10000000) % 100, "Crore, ") + res;
    res = convert2digit((n / 1000000000) % 100, "Billion, ") + res;

    return res;
}

int main()
{
    string resultStr = "";
    for(int i = 1; i <= 1000; i++) {
        resultStr += numberToWords(i);
    }
    for(int i=0; i<resultStr.length(); i++)
         if(resultStr[i] == ' ') resultStr.erase(i,1);

    std::cout << resultStr.length() << std::endl;
    return 0;
}

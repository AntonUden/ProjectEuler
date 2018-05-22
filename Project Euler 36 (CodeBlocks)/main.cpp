#include <iostream>
#include <bits/stdc++.h>
#include <cstdlib>
using namespace std;

int isPalindrome(string s) {
    string r = s;
    reverse(r.begin(), r.end());
    if(s == r) {
        return 1;
    }
    return 0;
}

std::string toBinary(int n)
{
    std::string r;
    while(n!=0) {r=(n%2==0 ?"0":"1")+r; n/=2;}
    return r;
}

int check(int i) {
    stringstream ss;
    ss << i;
    string bin = toBinary(i);

    if(isPalindrome(ss.str()) && isPalindrome(bin)) {
        return 1;
    }
    return 0;
}

int main()
{
    int64_t sum = 0;

    for(int i = 0; i < 1000000; i++) {
        if(check(i)) {
            sum+= i;
        }
    }
    cout << sum << endl;
    getwchar();
    return 0;
}

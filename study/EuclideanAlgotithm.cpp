#include <bits/stdc++.h>

int gcd(int a, int b) 
{
    if (a > b) {
        if (a%b==0) {
            return b;
        } else {
            return gcd(b, a%b);
        }
    } else {
        if (b%a==0) {
            return a;
        } else {
            return gcd(a, b%a);
        }
    }
}

int main(int argc,a char *argv[])
{
    int a, b;
    std::cin >> a >> b;
    std::cout << gcd(a, b) << std::endl;
    return 0;
}
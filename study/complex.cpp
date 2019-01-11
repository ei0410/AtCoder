#include <bits/stdc++.h> 
 
#define INF (1<<31)//INT_MAX/2
#define MOD 1000000007
#define PI  acos(-1)
 
using ll  = long long;
using ull = unsigned long long;
 
int main(int argc, char *argv[])
{
    std::complex<double> a, b, c;
    a = std::complex<double>(3, 2);
    b = std::complex<double>(-1, 3);

    c = a + b;
    std::cout << c << std::endl;
    c = a - b;
    std::cout << c << std::endl;
    c = a * b;
    std::cout << c << std::endl;
    c = a / b;
    std::cout << c << std::endl;

    return 0;
}
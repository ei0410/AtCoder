#include <bits/stdc++.h> 
 
#define INF (1<<31) - 1 //INT_MAX/2
#define MOD 1000000007
#define PI  acos(-1)
 
using ll  = long long;
using ull = unsigned long long;
 
int main(int argc, char *argv[])
{
    int a, b, c;
    std::cin >> a >> b >> c;

    if (a <= b) {
        if (b <= c) {
            std::cout << a+b << std::endl;
        } else {
            std::cout << a+c << std::endl;
        }
    } else {
        if (a <= c) {
            std::cout << a+b << std::endl;
        } else {
            std::cout << c+b << std::endl;
        }
    }
    return 0;
}
#include <bits/stdc++.h> 
 
#define INF (1<<31) - 1 //INT_MAX/2
#define MOD 1000000007
#define PI  acos(-1)
 
using ll  = long long;
using ull = unsigned long long;

int main(int argc, char *argv[])
{
    int a, b;
    std::cin >> a >> b;

    if (a > b) {
        std::cout << a - 1 << std::endl;
    } else {
        std::cout << a << std::endl;
    }
    return 0;
}
#include <bits/stdc++.h> 
 
#define INF (1<<31)//INT_MAX/2
#define MOD 1000000007
 
using ll  = long long;
using ull = unsigned long long;
 
int main(int argc, char *argv[])
{
    int X, t;
    std::cin >> X >> t;

    if (t > X) {
        std::cout << 0 << std::endl;
    } else {
        std::cout << X - t << std::endl;
    }
    return 0;
}
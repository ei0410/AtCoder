#include <bits/stdc++.h> 
 
#define INF (1<<31)//INT_MAX/2
#define MOD 1000000007
 
using ll  = long long;
using ull = unsigned long long;
 
int main(int argc, char *argv[])
{
    int x, a, b;
    std::cin >> x >> a >> b;
    
    if (a < b) {
        if (std::abs(x-a) <= std::abs(b-x)) {
            std::cout << 'A' << std::endl;
        } else {
            std::cout << 'B' << std::endl;
        }
    } else {
        if (std::abs(x-b) <= std::abs(x-a)) {
            std::cout << 'B' << std::endl;
        } else {
            std::cout << 'A' << std::endl;
        }
    }
    return 0;
}
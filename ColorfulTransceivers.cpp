#include <bits/stdc++.h> 
 
#define INF (1<<31)//INT_MAX/2
#define MOD 1000000007
 
using ll  = long long;
using ull = unsigned long long;
 
int main(int argc, char *argv[])
{
    int a, b, c, d;
    std::cin >> a >> b >> c >> d;

    if (std::abs(c-a) <= d) {
        std::cout << "Yes" << std::endl;
    } else {
        if (std::abs(b-a) <= d && std::abs(c-b) <= d) {
            std::cout << "Yes" << std::endl;
        } else {
            std::cout << "No"  << std::endl;
        }
    }

    return 0;
}
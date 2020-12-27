#include <bits/stdc++.h> 
 
#define INF (1<<31)//INT_MAX/2
#define MOD 1000000007
 
using ll  = long long;
using ull = unsigned long long;
 
int main(int argc, char *argv[])
{
    int a, b, c;
    std::cin >> a >> b >> c;

    if (a == b && b == c && c == a) {
        std::cout << 1 << std::endl;
    } else if (a != b && b == c && c != a) {
        std::cout << 2 << std::endl;
    } else if (a == b && b != c && c != a) {
        std::cout << 2 << std::endl;
    } else if (a != b && b != c && c == a) {
        std::cout << 2 << std::endl;
    } else {
        std::cout << 3 << std::endl;
    }
    return 0;
}
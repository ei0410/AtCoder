#include <bits/stdc++.h> 
 
#define INF (1<<31)//INT_MAX/2
#define MOD 1000000007
 
using ll  = long long;
using ull = unsigned long long;
 
int main(int argc, char *argv[])
{
    int A, B, C;
    std::cin >> A >> B >> C;

    int max;
    max = std::max({A, B, C});

    int sum = A + B + C;
    int ans = 3*max - A - B - C;

    if (ans % 2 == 0) {
        std::cout << ans / 2 << std::endl;
    } else {
        std::cout << ans / 2 + 2 << std::endl;
    }

    return 0;
}
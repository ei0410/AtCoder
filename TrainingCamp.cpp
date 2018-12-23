#include <bits/stdc++.h> 
 
#define INF (1<<31)//INT_MAX/2
#define MOD 1000000007
 
using ll  = long long;
using ull = unsigned long long;
 
int main(int argc, char *argv[])
{
    int N;
    std::cin >> N;

    ull ans = 1;
    for (int i = 1; i <= N; i++) {
        ans *= i;
        ans %= MOD;
    }

    std::cout << ans << std::endl;
    return 0;
}
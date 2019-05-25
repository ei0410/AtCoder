#include <bits/stdc++.h> 
 
#define INF (1<<31)//INT_MAX/2
#define MOD 1000000007
 
using ll  = long long;
using ull = unsigned long long;
 
int main(int argc, char *argv[])
{
    int N;
    std::vector<int> a(N);
    std::vector<int> dp(N+1);

    std::cin >> N;
    for (int i = 0; i < N; i++) {
        std::cin >> a[i];
    }

    dp[0] = 0;
    for (int i = 0; i < N; i++) {
        dp[i+1] = std::max(dp[i], dp[i] + a[i]);
    }

    std::cout << dp[N] << std::endl;
    return 0;
}
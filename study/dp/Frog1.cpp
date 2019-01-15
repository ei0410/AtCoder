#include <bits/stdc++.h> 
 
#define INF (1<<31) - 1 //INT_MAX/2
#define MOD 1000000007
#define PI  acos(-1)
 
using ll  = long long;
using ull = unsigned long long;
 
int main(int argc, char *argv[])
{
    int N;
    std::cin >> N;

    std::vector<int> h(N);
    for (int i = 0; i < N; i++) {
        std::cin >> h[i];
    }

    std::vector<int> dp(N);
    for (int i = 0; i < N; i++) {
        dp[i] = INF;
    }

    dp[0] = 0;
    dp[1] = std::abs(h[1] - h[0]); 
    for (int i = 2; i < N; i++) {
        dp[i] = std::min(dp[i-1] + std::abs(h[i] - h[i-1]), dp[i-2] + std::abs(h[i] - h[i-2]));
    }

    std::cout << dp[N-1] << std::endl;
    return 0;
}
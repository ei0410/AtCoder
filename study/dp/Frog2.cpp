#include <bits/stdc++.h> 
 
#define INF (1<<31) - 1 //INT_MAX/2
#define MOD 1000000007
#define PI  acos(-1)
 
using ll  = long long;
using ull = unsigned long long;
 
int main(int argc, char *argv[])
{
    int N, K;
    std::cin >> N >> K;

    std::vector<int> h(N);
    for (int i = 0; i < N; i++) {
        std::cin >> h[i];
    }

    std::vector<int> dp(N);
    for (int i = 0; i < N; i++) {
        dp[i] = INF;
    }

    dp[0] = 0;
    if (N <= K+1) {
        dp[N-1] = std::abs(h[N-1] - h[0]);
    } else {
        for (int i = 1; i <= K; i++) {
            dp[i] = std::abs(h[i] - h[0]);
        }
        for (int i = K+1; i < N; i++) {
            int min = INF;
            for (int j = 1; j <= K; j++) {
                int temp = dp[i-j] + std::abs(h[i] - h[i-j]);
                if (min > temp) {
                    min = temp;
                }
            }
            dp[i] = min;
        }
    }

    std::cout << dp[N-1] << std::endl;
    return 0;
}
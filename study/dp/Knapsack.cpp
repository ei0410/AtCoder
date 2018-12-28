#include <bits/stdc++.h> 
 
#define INF (1<<31)//INT_MAX/2
#define MOD 1000000007
 
using ll  = long long;
using ull = unsigned long long;
 
int main(int argc, char *argv[])
{
    int n, W;
    std::cin >> n >> W;

    int weight[n], value[n];
    for (int i = 0; i < n; i++) {
        std::cin >> weight[i] >> value[i];
    }

    int dp[100][10000];
    for (int w = 0; w <= W; w++) {
        dp[0][w] = 0;
    }

    for (int i = 0; i < n; i++) {
        for (int w = 0; w <= W; w++) {
            if (w >= weight[i]) {
                dp[i+1][w] = std::max(dp[i][w-weight[i]] + value[i], dp[i][w]);
            } else {
                dp[i+1][w] = dp[i][w];
            }
        }
    }

    std::cout << dp[n][W] << std::endl;
    return 0;
}
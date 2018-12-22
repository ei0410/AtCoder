#include <bits/stdc++.h> 
 
#define INF (1<<31)//INT_MAX/2
#define MOD 1000000007
 
using ll  = long long;
using ull = unsigned long long;
 
const int MAX_N = 100000;
int dp[MAX_N];

int main(int argc, char *argv[])
{
    int N;
    std::cin >> N;

    for (int i = 0; i < MAX_N; i++) {
        dp[i] = N;
    }
    dp[0] = 0;

    for (int n = 1; n <= N; n++) {
        for (int pow6 = 1; pow6 <= n; pow6 *= 6) {
            dp[n] = std::min(dp[n], dp[n - pow6] + 1);
        }
        for (int pow9 = 1; pow9 <= n; pow9 *= 9) {
            dp[n] = std::min(dp[n], dp[n - pow9] + 1);
        }
    }

    std::cout << dp[N] << std::endl;

    return 0;
}
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

    std::vector<int> dp(N);
    for (int i = 0; i < N; i++) {
        dp[i] = 0;
    }

    int ans = 0;

    std::cout << ans << std::endl;
    return 0;
}
#include <bits/stdc++.h> 
 
#define INF INT_MAX
#define MOD 1000000007
#define PI  acos(-1)
 
using ll  = long long;
using ull = unsigned long long;
using P = std::pair<int, int>;

template<class T> inline bool chmin(T& a, T b) {
    if (a > b) {
        a = b;
        return true;
    }
    return false;
}
template<class T> inline bool chmax(T& a, T b) {
    if (a < b) {
        a = b;
        return true;
    }
    return false;
}

int main(int argc, char *argv[])
{
    // input values
    int N;
    std::cin >> N;

    std::vector<std::vector<int>> a(N, std::vector<int>(3, 0));
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < 3; j++) {
            std::cin >> a[i][j];
        }
    }

    // dp table
    std::vector<std::vector<int>> dp(N, std::vector<int>(3, 0));
    
    // init dp table
    // ok

    // init condition
    // ok

    // loop
    for (int i = 0; i < N; i++) {
        chmax(dp[i+1][1], dp[i][0] + a[i][0]);
        chmax(dp[i+1][2], dp[i][0] + a[i][0]);
        chmax(dp[i+1][0], dp[i][1] + a[i][0]);
        chmax(dp[i+1][2], dp[i][1] + a[i][0]);
        chmax(dp[i+1][2], dp[i][2] + a[i][0]);
        chmax(dp[i+1][2], dp[i][2] + a[i][0]);
    }

    std::cout << dp[N-1] << std::endl;
    return 0;
}
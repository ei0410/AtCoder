#include <bits/stdc++.h> 
 
#define INF (1<<31) - 1 //INT_MAX/2
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
    int N;
    std::cin >> N;

    std::vector<int> h(N);
    for (int i = 0; i < N; i++) {
        std::cin >> h[i];
    }

    // dp table
    std::vector<ll> dp(N+2, INF);

    // init dp table
    // ok

    // init condition
    dp[0] = 0;

    // loop
    for (int i = 0; i < N; i++) {
        chmin(dp[i+1], dp[i] + std::abs(h[i+1] - h[i]));
        chmin(dp[i+2], dp[i] + std::abs(h[i+2] - h[i]));
    }

    std::cout << dp[N-1] << std::endl;
    return 0;
}
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

#define N_MAX 100100

int main(int argc, char *argv[])
{
    // input values
    int N, K;
    std::cin >> N >> K;

    std::vector<int> h(N);
    for (int i = 0; i < N; i++) {
        std::cin >> h[i];
    }

    // dp table
    std::vector<int> dp(N_MAX, INF);

    // init dp table
    // ok

    // init condition
    dp[0] = 0;

    // loop
    for (int i = 0; i < N; i++) {
        for (int j = 1; j <= K; j++) {
            chmin(dp[i+j], dp[i] + std::abs(h[i+j] - h[i]));
        }
    }

    std::cout << dp[N-1] << std::endl;
    return 0;
}
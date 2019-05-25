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

    // dp table
    int dp[550000];

    // init dp table
    for (int i = 0; i < 550000; i++) {
        dp[i] = INF;
    }

    // init condition
    dp[0] = 0;

    // loop
    for (int i = 0; i <= N; i++) {
        chmin(dp[i+1], dp[i]+1);
        for (int pow6 = 6; pow6 <= N; pow6*=6) {
            chmin(dp[i+pow6], dp[i]+1);
        }
        for (int pow9 = 9; pow9 <= N; pow9*=9) {
            chmin(dp[i+pow9], dp[i]+1);
        }
    }

    std::cout << dp[N] << std::endl;
    return 0;
}
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
    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 3;
    dp[4] = 4;
    dp[5] = 5;
    dp[6] = 1;
    dp[7] = 2;
    dp[8] = 3;
    dp[9] = 1;

    // loop
    for (int i = 10; i <= N; i++) {
        chmin(dp[i], dp[i-1]+1);
        for (int pow6 = 6; pow6 <= N; pow6*=6) {
            if (i - pow6 < 0) {
                break;
            } else if (i - pow6 == 0) {
                dp[i] = 1;
            } else {
                chmin(dp[i], dp[i-pow6]+1);
            }
        }
        for (int pow9 = 9; pow9 <= N; pow9*=9) {
            if (i - pow9 < 0) {
                break;
            } else if (i - pow9 == 0) {
                dp[i] = 1;
            } else {
                chmin(dp[i], dp[i-pow9]+1);
            }
        }
    }

    std::cout << dp[N] << std::endl;
    return 0;
}
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
    // input values
    int N;
    std::cin >> N;

    ll a[100010][3];
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < 3; j++) {
            std::cin >> a[i][j];
        }
    }

    // dp table
    ll dp[100010][3];

    // init dp table
    // ok

    // init condition
    // ok

    // loop
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                if (j == k) {
                    continue;
                }
                chmax(dp[i+1][k], dp[i][j] + a[i][k]);
            }
        }
    }

    ll res = 0;
    for (int i = 0; i < 3; i++) {
        chmax(res, dp[N][j]);
    }

    std::cout << res << std::endl;
    return 0;
}
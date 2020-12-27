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

#define N_MAX 100000

int N;
int h[N_MAX];
ll  dp[N_MAX];

ll rec(int i) {
    // check memo
    if (dp[i] < INF) {
        return dp[i];
    }

    // finish condition
    if (i == 0) {
        return 0;
    }

    ll res = INF;
    chmin(res, rec(i-1) + std::abs(h[i] - h[i-1]));
    if (i > 1) {
        chmin(res, rec(i-2) + std::abs(h[i] - h[i-2]));
    }

    return dp[i] = res;
}

int main(int argc, char *argv[])
{
    // input values
    std::cin >> N;

    for (int i = 0; i < N; i++) {
        std::cin >> h[i];
    }

    for (int i = 0; i < N; i++) {
        dp[i] = INF;
    }

    std::cout << rec(N-1) << std::endl;
    return 0;
}
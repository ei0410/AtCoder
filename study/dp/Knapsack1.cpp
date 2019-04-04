#include <bits/stdc++.h> 

using namespace std;

#define YES cout << "YES" << endl;
#define NO  cout << "NO"  << endl;
#define Yes cout << "Yes" << endl;
#define No  cout << "No"  << endl;
 
#define INF INT_MAX
#define MOD 1000000007
#define PI  acos(-1)

using ll  = long long;
using ull = unsigned long long;
using Pii = pair<int, int>;
using Pll = pair<ll, ll>;

#define rep(i, n) for (ll i = 0; i < n; i++)

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
    cin.tie(0);
    ios::sync_with_stdio(false);

    // input values
    int N, W;
    cin >> N >> W;

    vector<int> w(N), v(N);
    rep (i, N) {
        cin >> w[i] >> v[i];
    }

    // dp table
    vector<vector<ll>> dp(110, vector<ll>(100100, 0));

    // init dp table

    // init condition

    // loop
    rep (i, N) {
        for (int sum_w = 0; sum_w <= W; sum_w++) {
            if (sum_w - w[i] >= 0) {
                chmax(dp[i+1][sum_w], dp[i][sum_w-w[i]]+v[i]);
            }
            chmax(dp[i+1][sum_w], dp[i][sum_w]);
        }
    }

    cout << dp[N][W] << endl;
    return 0;
}
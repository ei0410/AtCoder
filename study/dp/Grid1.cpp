#include <bits/stdc++.h> 

using namespace std;

#define YES cout << "YES" << endl;
#define NO  cout << "NO"  << endl;
#define Yes cout << "Yes" << endl;
#define No  cout << "No"  << endl;
 
#define INF INT_MAX
#define LLINF LLONG_MAX
#define MOD 1000000007
#define PI  acos(-1)

using ll  = long long;
using ull = unsigned long long;
using Pii = pair<int, int>;
using Pll = pair<ll, ll>;

#define rep(i, n) for (ll i = 0; i < n; i++)
#define rrep(i, n) for (ll i = (n)-1; i >= 0; i--)

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

#define MAX_H 1100
#define MAX_W 1100

int main(int argc, char *argv[])
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    // input values
    ll H, W;
    cin >> H >> W;

    vector<vector<char>> a(H, vector<char>(W, '0'));
    rep (i, H) {
        rep (j, W) {
            cin >> a[i][j];
        }
    }

    // dp table
    // init dp table
    vector<vector<ll>> dp(MAX_H, vector<ll>(MAX_W, 0));

    // init condition
    dp[0][0] = 1;

    // loop
    rep (i, H) {
        rep (j, W) {
            if (i+1 < H && a[i+1][j] == '.') {
                dp[i+1][j] += dp[i][j];
                dp[i+1][j] %= MOD;
            }
            if (j+1 < W && a[i][j+1] == '.') {
                dp[i][j+1] += dp[i][j];
                dp[i][j+1] %= MOD;
            }
        }
    }

    cout << dp[H-1][W-1] << endl;
    return 0;
}
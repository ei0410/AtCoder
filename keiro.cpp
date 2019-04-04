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

#define MAX_W 100010
#define MAX_H 100010

int main(int argc, char *argv[])
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    ll W, H;
    cin >> W >> H;

    vector<vector<ll>> dp(MAX_W, vector<ll>(MAX_H, 1));

    rep (i, W) {
        rep (j, H) {
            dp[i+1][j] %= MOD;
            dp[i][j+1] %= MOD;
            chmax(dp[i+1][j+1], dp[i+1][j]+dp[i][j+1]);
        }
    }

    cout << dp[W-1][H-1] << endl;
    return 0;
}
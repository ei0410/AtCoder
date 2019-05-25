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
    int N;
    cin >> N;

    vector<vector<int>> a(N, vector<int>(3, 0));
    rep (i, N) {
        rep (j, 3) {
            cin >> a[i][j];
        }
    }

    // dp table
    vector<vector<int>> dp(100100, vector<int>(3, 0));
    
    // init dp table

    // init condition

    // loop
    rep (i, N) {
        rep (j, 3) {
            rep (k, 3) {
                if (j == k) {
                    continue;
                }
                chmax(dp[i+1][k], dp[i][j] + a[i][k]);
            }
        }
    }

    ll ans = max(dp[N][0], max(dp[N][1], dp[N][2]));

    cout << ans << endl;
    return 0;
}
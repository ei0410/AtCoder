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

#define MAX_N 3010

int main(int argc, char *argv[])
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    // input values
    ll N;
    cin >> N;

    vector<double> p(N);
    rep (i, N) {
        cin >> p[i];
    }

    // dp table
    // init dp table
    vector<vector<double>> dp(MAX_N, vector<double>(MAX_N, 0));

    // init condition
    dp[0][0] = 1;

    // loop
    rep (i, N) {
        rep (j, i+1) {
            dp[i+1][j+1] += dp[i][j]*p[i];
            dp[i+1][j] += dp[i][j]*(1.0-p[i]);
        }
    }

    double ans = 0;
    for (ll i = (N+1)/2; i <= N; i++) {
        ans += dp[N][i];
    }

    cout << fixed << setprecision(10) << ans << endl;
    return 0;
}
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

int main(void)
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    ll H, N;
    cin >> H >> N;

    vector<ll> A(N), B(N);
    rep (i, N) {
        cin >> A[i] >> B[i];
    }

    vector<vector<ll>> dp(N+1, vector<ll>(H+100001, INF));
    rep (i, N+1) {
        dp[i][0] = 0;
    }

    rep (i, N) {
        rep (j, H+100001) {
            if (j < A[i]) {
                dp[i+1][j] = dp[i][j];
            } else {
                dp[i+1][j] = min(dp[i][j], dp[i+1][j-A[i]]+B[i]);
            }
        }
    }

    ll ans = INF;
    for (ll i = H; i < H+100001; i++) {
        ans = min(ans, dp[N][i]);
    }

    cout << ans << endl;
    return 0;
}
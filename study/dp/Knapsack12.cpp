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

ll dp[110][200010];

int main(void)
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    ll N, W;
    cin >> N >> W;

    vector<ll> w(N), v(N);
    rep (i, N) {
        cin >> w[i] >> v[i];
    }

    rep (i, N) {
        rep (j, W+1) {
            chmax(dp[i+1][j], dp[i][j]);
            if (j-w[i] >= 0) {
                chmax(dp[i+1][j], dp[i][j-w[i]]+v[i]);
            }
        }
    }

    cout << dp[N][W] << endl;
    return 0;
}
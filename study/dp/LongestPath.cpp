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

ll N, M;
vector<vector<ll>> G;

ll dp[100100];
ll rec(ll v) {
    if (dp[v] != -1) {
        return dp[v];
    }

    ll res = 0;
    for (auto next : G[v]) {
        chmax(res, rec(next)+1);
    }

    return dp[v] = res;
}

int main(int argc, char *argv[])
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    // input values
    cin >> N >> M;
    G.assign(N, vector<ll>());

    rep (i, M) {
        ll x, y;
        cin >> x >> y;
        x--;
        y--;
        G[x].push_back(y);
    }

    // dp table
    // init dp table
    // init condition
    rep (i, N) {
        dp[i] = -1;
    }

    // loop
    ll ans = 0;
    rep (v, N) {
        chmax(ans, rec(v));
    }

    cout << ans << endl;
    return 0;
}
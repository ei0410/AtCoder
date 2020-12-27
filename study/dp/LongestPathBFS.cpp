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
vector<ll> deg;

ll dp[100100];

int main(int argc, char *argv[])
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    // input values
    cin >> N >> M;
    G.assign(N, vector<ll>());
    deg.assign(N, 0);

    rep (i, M) {
        ll x, y;
        cin >> x >> y;
        x--;
        y--;
        G[x].push_back(y);
        deg[y]++;
    }

    queue<ll> que;
    rep (i, N) {
        if (deg[i] == 0) {
            que.push(i);
        }
    }

    // dp table
    // init dp table
    // init condition
    // loop
    while (!que.empty()) {
        ll v = que.front();
        que.pop();

        for (auto next : G[v]) {
            deg[next]--;
            if (deg[next] == 0) {
                que.push(next);
                chmax(dp[next], dp[v]+1);
            }
        }
    }

    ll ans = 0;
    rep (i, N) {
        chmax(ans, dp[i]);
    }

    cout << ans << endl;
    return 0;
}
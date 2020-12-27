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

#define rep(i, n) for (ll i = 0; i < (n); i++)
#define rrep(i, n) for (ll i = (n)-1; i >= 0; i--)

#define MAX_N 310

int main(void)
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    ll N, M;
    cin >> N >> M;
    vector<vector<ll>> d(MAX_N, vector<ll>(MAX_N, INF));

    rep (i, M) {
        ll from, to, cost;
        cin >> from >> to >> cost;
        from--;
        to--;
        if (d[from][to] > cost) {
            d[from][to] = cost;
            d[to][from] = cost;
        }
    }

    rep (k, N) {
        rep (i, N) {
            rep (j, N) {
                d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
            }
        }
    }

    ll ans = INF;
    rep (i, N) {
        ll tmp = 0;
        rep (j, N) {
            if (i == j) {
                continue;
            }
            tmp = max(tmp, d[i][j]);
        }
        ans = min(ans, tmp);
    }

    cout << ans << endl;
    return 0;
}
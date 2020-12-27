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

int main(void)
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    ll N, M;
    cin >> N >> M;

    vector<vector<bool>> vv(N, vector<bool>(N, false));
    rep (i, M) {
        ll x, y;
        cin >> x >> y;
        x--;
        y--;
        vv[x][y] = true;
        vv[y][x] = true;
    }

    ll ans = 0;
    vector<ll> check;
    for (ll bit = 0; bit < (1<<N); bit++) {
        check.clear();
        for (ll i = 0; i < N; i++) {
            if (bit & (1<<i)) {
                check.push_back(i);
            }
        }
        
        bool flag = true;
        rep (i, check.size()) {
            rep (j, check.size()) {
                if (i == j) {
                    continue;
                }

                if (!vv[check[i]][check[j]]) {
                    flag = false;
                }
            }
        }
        
        if (flag) {
            ans = max(ans, ll(check.size()));
        }
    }

    cout << ans << endl;
    return 0;
}
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

int main(int argc, char *argv[])
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    ll H, W;
    cin >> H >> W;

    ll N = 10;
    vector<vector<ll>> d(N, vector<ll>(N, INF));

    rep (i, N) {
        rep (j, N) {
            ll c;
            cin >> c;
            d[i][j] = c;
        }
    }

    vector<vector<ll>> A(H, vector<ll>(W, 0));
    rep (i, H) {
        rep (j, W) {
            ll a;
            cin >> a;
            A[i][j] = a;
        }
    }

    rep (k, N) {
        rep (i, N) {
            rep (j, N) {
                d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
            }
        }
    }

    ll ans = 0;
    rep (i, H) {
        rep (j, W) {
            if (A[i][j] == -1 || A[i][j] == 1) {
                continue;
            } else {
                ans += d[A[i][j]][1];
            }
        }
    }

    cout << ans << endl;
    return 0;
}
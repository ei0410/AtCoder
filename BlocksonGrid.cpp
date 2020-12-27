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

    ll H, W;
    cin >> H >> W;

    ll mi = INF;
    vector<vector<ll>> A(H, vector<ll>(W, 0));
    rep (i, H) {
        rep (j, W) {
            cin >> A[i][j];
            mi = min(mi, A[i][j]);
        }
    }

    ll ans = 0;
    rep (i, H) {
        rep (j, W) {
            ans += (A[i][j]-mi);
        }
    }

    cout << ans << endl;
    return 0;
}
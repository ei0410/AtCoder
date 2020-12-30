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

int main(void)
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    ll H, W;
    cin >> H >> W;

    vector<vector<ll>> a(H, vector<ll>(W));
    rep (i, H) {
        rep (j, W) {
            cin >> a[i][j];
        }
    }

    vector<vector<ll>> s(H+1, vector<ll>(W+1, 0));
    rep (i, H) {
        rep (j, W) {
            s[i+1][j+1] = s[i][j+1] + s[i+1][j] - s[i][j] + a[i][j];
        }
    }

    ll Q;
    cin >> Q;
    rep (i, Q) {
        ll x1, x2, y1, y2;
        cin >> x1 >> x2 >> y1 >> y2;
        cout << s[x2][y2] - s[x1][y2] - s[x2][y1] + s[x1][y1] << endl;
    }
    return 0;
}
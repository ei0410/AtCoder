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

    ll t;
    cin >> t;

    vector<ll> ans(t);

    rep (i, t) {
        ll p, a, b, c;
        cin >> p >> a >> b >> c;
        ll tmpa, tmpb, tmpc;
        if (p > a) {
            tmpa = ((p/a)+1)*a-p;
        } else {
            tmpa = a-p;
        }
        if (p > b) {
            tmpb = ((p/b)+1)*b-p;
        } else {
            tmpb = b-p;
        }
        if (p > c) {
            tmpc = ((p/c)+1)*c-p;
        } else {
            tmpc = c-p;
        }
        ans[i] = min(tmpa, min(tmpb, tmpc));
    }

    rep (i, t) {
        cout << ans[i] << endl;
    }
    return 0;
}
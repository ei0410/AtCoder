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
        ll n, m;
        cin >> n >> m;
        vector<ll> top(n);
        vector<ll> left(m);
        rep (j, n) {
            cin >> top[j];
        }
        rep (j, m) {
            cin >> left[j];
        }

        ll cnt = 0;
        rep (j, n) {
            rep (k, m) {
                if (top[j] == left[k]) {
                    cnt++;
                }
            }
        }
        ans[i] = cnt;
    }

    rep (i, t) {
        cout << ans[i] << endl;
    }
    return 0;
}
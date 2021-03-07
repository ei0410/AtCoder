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

    ll n, q;
    cin >> n >> q;
    vector<ll> a(n);
    rep (i, n) {
        cin >> a[i];
    }

    ll cnt = 0;
    rep (i, n) {
        if (a[i] == 1) {
            cnt++;
        }
    }

    rep (i, q) {
        ll x, k;
        cin >> x >> k;

        if (x == 2) {
            if (k <= cnt) {
                cout << 1 << endl;
            } else {
                cout << 0 << endl;
            }
        } else {
            if (a[k-1] == 1) {
                a[k-1] = 0;
                cnt--;
            } else {
                a[k-1] = 1;
                cnt++;
            }
        }
    }
    return 0;
}
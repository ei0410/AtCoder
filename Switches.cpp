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

    ll N, M;
    cin >> N >> M;

    vector<vector<ll>> s(M);
    rep (i, M) {
        ll k;
        cin >> k;
        rep (j, k) {
            ll tmp;
            cin >> tmp;
            tmp--;
            s[i].push_back(tmp);
        }
    }

    vector<ll> p(M);
    rep (i, M) {
        cin >> p[i];
    }

    ll ans = 0;
    for (ll bit = 0; bit < (1<<N); bit++) {
        bool ok = true;
        rep (i, M) {
            ll cnt = 0;
            for (auto j : s[i]) {
                if (bit & (1<<j)) {
                    cnt++;
                }
            }
            
            if (cnt%2 != p[i]) {
                ok = false;
                break;
            }
        }

        if (ok) {
            ans++;
        }
    }

    cout << ans << endl;
    return 0;
}
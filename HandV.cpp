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

    ll H, W, K;
    cin >> H >> W >> K;

    vector<string> c(H);
    rep (i, H) {
        cin >> c[i];
    }

    ll ans = 0;
    rep (bith, 1<<H) {
        rep (bitw, 1<<W) {
            ll tmp = 0;
            rep (j, H) {
                rep (i, W) {
                    if ((bith & (1<<j)) || (bitw & (1<<i))) {
                        continue;
                    }
                    if (c[j][i] == '#') {
                        tmp++;
                    }
                }
            }
            if (tmp == K) {
                ans++;
            }
        }
    }

    cout << ans << endl;
    return 0;
}
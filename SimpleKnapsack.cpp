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

    ll N, W;
    cin >> N >> W;

    vector<vector<ll>> vec(4);
    ll basew = 0;
    rep (i, N) {
        ll w, v;
        cin >> w >> v;
        if (i == 0) {
            basew = w;
        }
        vec[w-basew].push_back(v);
    }

    rep (i, 4) {
        sort(vec[i].rbegin(), vec[i].rend());
        vec[i].insert(vec[i].begin(), 0);
    }

    ll ans = 0;
    rep (i, vec[0].size()) {
        rep (j, vec[1].size()) {
            rep (k, vec[2].size()) {
                rep (l, vec[3].size()) {
                    if (basew*i + (basew+1)*j + (basew+2)*k + (basew+3)*l <= W) {
                        ll value = 0;
                        rep (m, i+1) {
                            value += vec[0][m];
                        }
                        rep (m, j+1) {
                            value += vec[1][m];
                        }
                        rep (m, k+1) {
                            value += vec[2][m];
                        }
                        rep (m, l+1) {
                            value += vec[3][m];
                        }
                        ans = max(ans, value);
                    }
                }
            }
        }
    }

    cout << ans << endl;
    return 0;
}
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

    ll N, K;
    cin >> N >> K;

    vector<ll> V(N);
    rep (i, N) {
        cin >> V[i];
    }

    ll ans = 0;
    for (ll l = 0; l <= min(N, K); l++) {
        for (ll r = 0; r <= min(N, K)-l; r++) {
            ll num = K-l-r;
            vector<ll> tmp;
            ll point = 0;
            rep (i, l) {
                tmp.push_back(V[i]);
                point += V[i];
            }
            rep (i, r) {
                tmp.push_back(V[N-i-1]);
                point += V[N-i-1];
            }

            sort(tmp.begin(), tmp.end());

            for (ll i = 0; i < min(num, ll(tmp.size())); i++) {
                if (tmp[i] < 0) {
                    point -= tmp[i];
                } else {
                    break;
                }
            }

            ans = max(ans, point);
        }
    }

    cout << ans << endl;
    return 0;
}
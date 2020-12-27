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

    ll N, M, R;
    cin >> N >> M >> R;

    vector<ll> r(R);
    rep (i, R) {
        cin >> r[i];
    }

    ll d[210][210];
    rep (i, 210) {
        rep (j, 210) {
            if (i != j) {
                d[i][j] = INF;
            }
        }
    }

    rep (i, M) {
        ll A, B, C;
        cin >> A >> B >> C;
        d[A][B] = C;
        d[B][A] = C;
    }

    for (ll k = 1; k <= N; k++) {
        for (ll i = 1; i <= N; i++) {
            for (ll j = 1; j <= N; j++) {
                d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
            }
        }
    }

    sort(r.begin(), r.end());

    ll ans = INF;
    do {
        ll tmp = 0;
        rep (i, R-1) {
            tmp += d[r[i]][r[i+1]];
        }
        ans = min(tmp, ans);
    } while (next_permutation(r.begin(), r.end()));

    cout << ans << endl;
    return 0;
}
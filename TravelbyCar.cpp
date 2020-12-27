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

    ll N, M, L;
    cin >> N >> M >> L;

    vector<vector<ll>> d(N, vector<ll>(N, INF));
    rep (i, N) {
        d[i][i] = 0;
    }
    rep (i, M) {
        ll A, B, C;
        cin >> A >> B >> C;
        A--;
        B--;
        d[A][B] = C;
        d[B][A] = C;
    }

    rep (k, N) {
        rep (i, N) {
            rep (j, N) {
                d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
            }
        }
    }

    vector<vector<ll>> d2(N, vector<ll>(N, INF));
    rep (i, N) {
        rep (j, N) {
            if (d[i][j] <= L) {
                d2[i][j] = 1;
            }
        }
    }

    rep (k, N) {
        rep (i, N) {
            rep (j, N) {
                d2[i][j] = min(d2[i][j], d2[i][k] + d2[k][j]);
            }
        }
    }

    ll Q;
    cin >> Q;

    vector<ll> s(Q), t(Q);
    rep (i, Q) {
        cin >> s[i] >> t[i];
        s[i]--;
        t[i]--;
    }

    rep (i, Q) {
        ll ans = d2[s[i]][t[i]]-1;
        if (d2[s[i]][t[i]] == INF) {
            ans = -1;
        }
        cout << ans << endl;
    }
    return 0;
}
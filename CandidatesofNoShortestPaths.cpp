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

#define MAX_N 110

int main(int argc, char *argv[])
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    ll N, M;
    cin >> N >> M;

    vector<ll> a(M), b(M), c(M);
    rep (i, M) {
        cin >> a[i] >> b[i] >> c[i];
        a[i]--;
        b[i]--;
    }

    ll d[MAX_N][MAX_N];
    rep (i, N) {
        rep (j, N) {
            if (i == j) {
                d[i][j] = 0;
            } else {
                d[i][j] = INF;
            }
        }
    }

    rep (i, M) {
        d[a[i]][b[i]] = min(d[a[i]][b[i]], c[i]);
        d[b[i]][a[i]] = min(d[b[i]][a[i]], c[i]);
    }

    rep (k, N) {
        rep (i, N) {
            rep (j, N) {
                d[i][j] = min(d[i][j], d[i][k]+d[k][j]);
            }
        }
    }

    ll ans = M;
    rep (i, M) {
        bool flag = false;
        rep (j, N) {
            if (d[j][a[i]]+c[i] == d[j][b[i]]) {
                flag = true;
            }
        }
        if (flag) {
            ans--;
        }
    }

    cout << ans << endl;
    return 0;
}
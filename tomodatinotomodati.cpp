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

#define MAX_N 10

int main(int argc, char *argv[])
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    ll N, M;
    cin >> N >> M;
    ll d[MAX_N][MAX_N];

    rep (i, N) {
        rep (j, N) {
            d[i][j] = INF;
        }
    }

    rep (i, M) {
        ll A, B;
        cin >> A >> B;
        A--;
        B--;
        d[A][B] = 1;
        d[B][A] = 1;
    }

    rep (k, N) {
        rep (i, N) {
            rep (j, N) {
                d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
            }
        }
    }

    rep (i, N) {
        ll ans = 0;
        rep (j, N) {
            if (i == j) {
                continue;
            }
            if (d[i][j] == 2) {
                ans++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
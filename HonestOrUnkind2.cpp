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

#define N_MAX 20

int main(int argc, char *argv[])
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    ll N;
    ll A[N_MAX];
    ll x[N_MAX][N_MAX];
    ll y[N_MAX][N_MAX];

    cin >> N;

    rep (i, N) {
        cin >> A[i];
        rep (j, A[i]) {
            cin >> x[i][j] >> y[i][j];
        }
    }

    ll ans = 0;
    for (ll bit = 0; bit < (1<<N); bit++) {
        bool flag = false;
        ll cnt = 0;
        rep (i, N) {
            if (bit & (1<<i)) {
                rep (j, A[i]) {
                    if (y[i][j] == 1 && (bit & 1<<(x[i][j]-1)) == 0) {
                        flag = true;
                    }
                    if (y[i][j] == 0 && (bit & 1<<(x[i][j]-1)) != 0) {
                        flag = true;
                    }
                    if (flag) {
                        break;
                    }
                }
            }
        }

        if (!flag) {
            rep (i, N) {
                if (bit & (1<<i)) {
                    cnt++;
                }
            }
        }

        ans = max(ans, cnt);
    }

    cout << ans << endl;
    return 0;
}
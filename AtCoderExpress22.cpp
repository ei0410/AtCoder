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

    ll N, M, Q;
    cin >> N >> M >> Q;

    vector<vector<ll>> a(N, vector<ll>(N, 0));
    rep (i, M) {
        ll L, R;
        cin >> L >> R;
        L--;
        R--;
        a[L][R]++;
    }

    vector<vector<ll>> s(N+1, vector<ll>(N+1, 0));
    rep (i, N) {
        rep (j, N) {
            s[i+1][j+1] = s[i][j+1] + s[i+1][j] - s[i][j] + a[i][j];
        }
    }

    rep (i, Q) {
        ll p, q;
        cin >> p >> q;
        p--;
        cout << s[q][q] - s[p][q] - s[q][p] + s[p][p] << endl;
    }
    return 0;
}

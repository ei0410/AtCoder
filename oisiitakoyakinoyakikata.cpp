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

#define rep(i, n) for (ll i = 0; i < n; i++)

int main(int argc, char *argv[])
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    ll N;
    cin >> N;

    vector<vector<ll>> D(N, vector<ll>(N));
    rep (i, N) {
        rep (j, N) {
            cin >> D[i][j];
        }
    }

    vector<vector<ll>> S(N+1, vector<ll>(N+1, 0));
    rep (i, N) {
        rep (j, N) {
            S[i+1][j+1] = S[i][j+1] + S[i+1][j] - S[i][j] + D[i][j];
        }
    }

    vector<ll> val(N*N+1, 0);
    rep (x1, N) {
        for (ll x2 = x1+1; x2 <= N; x2++) {
            rep (y1, N) {
                for (ll y2 = y1+1; y2 <= N; y2++) {
                    ll area = (x2 - x1) * (y2 - y1);
                    ll sum = S[x2][y2] - S[x1][y2] - S[x2][y1] + S[x1][y1];
                    val[area] = max(val[area], sum);
                }
            }
        }
    }

    rep (i, N*N) {
        val[i+1] = max(val[i+1], val[i]);
    }

    ll Q;
    cin >> Q;

    rep (i, Q) {
        ll P;
        cin >> P;
        cout << val[P] << endl;
    }
    return 0;
}
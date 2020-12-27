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

    ll N, M, X;
    cin >> N >> M >> X;

    vector<ll> C(N);
    vector<vector<ll>> A(N, vector<ll>(M, 0));

    rep (i, N) {
        cin >> C[i];
        rep (j, M) {
            cin >> A[i][j];
        }
    }

    ll ans = INF;
    for (ll bit = 0; bit < (1<<N); bit++) {
        vector<ll> table(M, 0);
        ll sum = 0;

        for (ll i = 0; i < N; i++) {
            if (bit & (1<<i)) {
                sum += C[i];
                for (ll j = 0; j < M; j++) {
                    table[j] += A[i][j];
                }
            }
        }

        rep (i, M) {
            if (table[i] < X) {
                break;
            }
            if (i == M-1) {
                ans = min(ans, sum);
            }
        }
    }

    if (ans == INF) {
        cout << -1 << endl;
    } else {
        cout << ans << endl;
    }
    return 0;
}
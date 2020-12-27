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

ll dp[60][60][12000];

int main(void)
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    ll W, N, K;
    cin >> W >> N >> K;

    vector<ll> A(N), B(N);
    rep (i, N) {
        cin >> A[i] >> B[i];
    }

    dp[0][0][0] = 0;

    rep (i, N) {
        rep (j, K+1) {
            rep (k, W+1) {
                dp[i+1][j][k] = max(dp[i+1][j][k], dp[i][j][k]);
                if (k+A[i] <= W && j <= K) {
                    dp[i+1][j+1][k+A[i]] = max(dp[i+1][j+1][k+A[i]], dp[i][j][k] + B[i]);
                }
            }
        }
    }

    ll ans = 0;
    rep (i, K+1) {
        rep (j, W+1) {
            ans = max(dp[N][i][j], ans);
        }
    }

    cout << ans << endl;
    return 0;
}
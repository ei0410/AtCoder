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

ll dp[1010][1010];

int main(void)
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    ll N, M;
    cin >> N >> M;

    vector<ll> A(N), B(M);
    rep (i, N) {
        cin >> A[i];
    }
    rep (i, M) {
        cin >> B[i];
    }

    rep (i, 1010) {
        rep (j, 1010) {
            dp[i][j] = INF;
        }
    }

    dp[0][0] = 0;
    rep (i, N+1) {
        rep (j, M+1) {
            if (i < N) {
                dp[i+1][j] = min(dp[i+1][j], dp[i][j]+1);
            }
            if (j < M) {
                dp[i][j+1] = min(dp[i][j+1], dp[i][j]+1);
            }
            if (i < N && j < M) {
                if (A[i] != B[j]) {
                    dp[i+1][j+1] = min(dp[i+1][j+1], dp[i][j]+1);
                } else {
                    dp[i+1][j+1] = min(dp[i+1][j+1], dp[i][j]+0);
                }
            }
        }
    }

    cout  << dp[N][M] << endl;
    return 0;
}
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

double dp[110][70][40][30];

int main(void)
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    ll N, D;
    cin >> N >> D;
    
    ll A = 0;
    ll B = 0;
    ll C = 0;
    while(D%2 == 0) {
        D /= 2;
        A++;
    }
    while(D%3 == 0) {
        D /= 3;
        B++;
    }
    while(D%5 == 0) {
        D /= 5;
        C++;
    }

    if (D != 1) {
        cout << 0 << endl;
        return 0;
    }

    dp[0][0][0][0] = 1.0;
    rep (i, N) {
        rep (a, A+1) {
            rep (b, B+1) {
                rep (c, C+1) {
                    ll a1 = min(a+1, A);
                    ll a2 = min(a+2, A);
                    ll b1 = min(b+1, B);
                    ll c1 = min(c+1, C);
                    dp[i+1][a][b][c] += dp[i][a][b][c]/6.0;
                    dp[i+1][a1][b][c] += dp[i][a][b][c]/6.0;
                    dp[i+1][a][b1][c] += dp[i][a][b][c]/6.0;
                    dp[i+1][a2][b][c] += dp[i][a][b][c]/6.0;
                    dp[i+1][a][b][c1] += dp[i][a][b][c]/6.0;
                    dp[i+1][a1][b1][c] += dp[i][a][b][c]/6.0;
                }
            }
        }
    }

    cout << fixed << setprecision(10) << dp[N][A][B][C] << endl;
    return 0;
}
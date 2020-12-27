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

const ll X = 100;
double dp[X+1][X+1][X+1];

int main(void)
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    ll A, B, C;
    cin >> A >> B >> C;

    for (ll i = X-1; i >= 0; i--) {
        for (ll j = X-1; j >= 0; j--) {
            for (ll k = X-1; k >= 0; k--) {
                if (i+j+k == 0) {
                    continue;
                }
                double now = 0;
                now += dp[i+1][j][k]*i;
                now += dp[i][j+1][k]*j;
                now += dp[i][j][k+1]*k;

                dp[i][j][k] = now/(i+j+k)+1;
            }
        }
    }

    cout << fixed << setprecision(9) << dp[A][B][C] << endl;
    return 0;
}
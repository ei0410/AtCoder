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

ll dp[110][30];

int main(void)
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    ll N;
    cin >> N;

    vector<ll> v(N);
    rep (i, N) {
        cin >> v[i];
    }

    dp[0][0] = 1;

    rep (i, N) {
        rep (j, 21) {
            if (j+v[i] <= 20 && i != 0) {
                dp[i+1][j] += dp[i][j+v[i]];
            }
            if (j-v[i] >= 0) {
                dp[i+1][j] += dp[i][j-v[i]];
            }
        }
    }

    cout << dp[N-1][v[N-1]] << endl;
    return 0;
}
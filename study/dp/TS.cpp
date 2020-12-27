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

    ll N, M;
    cin >> N >> M;

    vector<bool> check(101000, true);
    rep (i, M) {
        ll a;
        cin >> a;
        check[a] = false;
    }

    vector<ll> dp(101000, 0);

    dp[0] = 1;

    rep (i, N+1) {
        if (check[i+1]) {
            dp[i+1] = (dp[i+1] + dp[i])%MOD;
        }
        if (check[i+2]) {
            dp[i+2] = (dp[i+2] + dp[i])%MOD;
        }
    }

    cout << dp[N] << endl;
    return 0;
}
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

    ll N;
    cin >> N;

    vector<ll> dp(200000, INF);

    dp[0] = 0;

    rep (i, N+1) {
        dp[i+1] = min(dp[i+1], dp[i]+1);
        for (ll j = 1; j <= 6; j++) {
            dp[i+pow(6, j)] = min(dp[i+pow(6, j)], dp[i]+1);
        }
        for (ll j = 1; j <= 5; j++) {
            dp[i+pow(9, j)] = min(dp[i+pow(9, j)], dp[i]+1);
        }
    }

    cout << dp[N] << endl;
    return 0;
}
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

    ll n, m;
    cin >> n >> m;

    vector<ll> c(m);
    rep (i, m) {
        cin >> c[i];
    }

    sort(c.begin(), c.end());

    vector<ll> dp(60100, INF);
    dp[0] = 0;
    rep (i, n+1) {
        rep (j, m) {
            dp[i+c[j]] = min(dp[i+c[j]], dp[i]+1);
        }
    }

    cout << dp[n] << endl;
    return 0;
}
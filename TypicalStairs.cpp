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

    ll N, M;
    cin >> N >> M;

    vector<bool> flags(N+1, false);
    rep (i, M) {
        ll a;
        cin >> a;
        flags[a] = true;
    }

    vector<ll> dp(N+1, 0);
    dp[N] = 1;
    for (ll i = N-1; i >= 0; i--) {
        if (flags[i]) {
            dp[i] = 0;
            continue;
        }
        if (i == N-1) {
            dp[i] = dp[i+1];
        } else {
            dp[i] = (dp[i+1] + dp[i+2]) % MOD;
        }
    }

    cout << dp[0] << endl;
    return 0;
}
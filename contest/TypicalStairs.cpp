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

    vector<ll> oks(N+1, true);
    rep (i, M) {
        ll a;
        cin >> a;
        oks[a] = false;
    }

    vector<ll> dp(N+1);
    
    dp[0] = 1;

    rep (i, N) {
        for (ll j = i+1; j <= min(N, i+2); j++) {
            if (oks[j]) {
                dp[j] += dp[i];
                dp[j] %= MOD;
            }
        }
    }

    cout << dp[N] << endl;
    return 0;
}
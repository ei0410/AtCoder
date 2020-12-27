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

    vector<ll> p(N);
    rep (i, N) {
        cin >> p[i];
    }

    vector<bool> dp(12000, false);

    dp[0] = true;

    rep (i, N) {
        rrep (j, 11000) {
            if (dp[j]) {
                dp[j+p[i]] = true;
            }
        }
    }

    ll ans = 0;
    rep (i, 12000) {
        if (dp[i]) {
            ans++;
        }
    }

    cout << ans << endl;
    return 0;
}
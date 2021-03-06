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

    ll X;
    cin >> X;

    vector<bool> dp(101000, false);

    dp[0] = true;

    rep (i, 100100) {
        if (dp[i]) {
            rep (j, 6) {
                dp[i+100+j] = true;
            }
        }
    }

    if (dp[X]) {
        cout << 1 << endl;
    } else {
        cout << 0 << endl;
    }
    return 0;
}
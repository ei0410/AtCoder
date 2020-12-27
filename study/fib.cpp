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

double dp[1480];

int main(void)
{
    ll N;
    cin >> N;

    dp[0] = 0;
    dp[1] = 1;
    rep (i, N) {
        dp[i+2] = dp[i+1] + dp[i];
    }

    cout << dp[N] << endl;
    return 0;
}
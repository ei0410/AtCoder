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

ll func(ll n, vector<ll> &dp) {
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }

    if (dp[n] != -1) {
        return dp[n];
    }

    return dp[n] = func(n-2, dp) + func(n-1, dp);
}

int main(void)
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    vector<ll> dp(50, -1);
    cout << func(50, dp) << endl;
    return 0;
}
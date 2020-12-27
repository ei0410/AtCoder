#include <bits/stdc++.h> 

using namespace std;

#define YES cout << "YES" << endl;
#define NO  cout << "NO"  << endl;
#define Yes cout << "Yes" << endl;
#define No  cout << "No"  << endl;
 
#define INF INT_MAX
#define LLINF LLONG_MAX
#define MOD 1000000007
#define PI  acos(-1)

using ll  = long long;
using ull = unsigned long long;
using Pii = pair<int, int>;
using Pll = pair<ll, ll>;

#define rep(i, n) for (ll i = 0; i < n; i++)
#define rrep(i, n) for (ll i = (n)-1; i >= 0; i--)

template<class T> inline bool chmin(T& a, T b) {
    if (a > b) {
        a = b;
        return true;
    }
    return false;
}

template<class T> inline bool chmax(T& a, T b) {
    if (a < b) {
        a = b;
        return true;
    }
    return false;
}

ll dp[2020];

int main(void)
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    ll S;
    cin >> S;

    dp[1] = 0;
    dp[2] = 0;
    dp[3] = 1;
    for (ll i = 4; i <= S; i++) {
        (dp[i] = dp[i-1] + dp[i-3]) %= MOD;
    }

    cout << dp[S] << endl;
    return 0;
}
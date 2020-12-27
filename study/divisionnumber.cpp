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

#define MAX_N 1010

ll N;
ll dp[MAX_N][MAX_N];

int main(void)
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> N;

    dp[0][0] = 1;
    for (ll i = 1; i <= N; i++) {
        rep (j, N+1) {
            if (j-i >= 0) {
                dp[i][j] = (dp[i][j-i]+dp[i-1][j])%MOD;
            } else {
                dp[i][j] = dp[i-1][j];
            }
        }
    }

    cout << dp[N][N] << endl;
    return 0;
}
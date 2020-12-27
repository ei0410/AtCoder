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

ll dp[20][2][2];

ll solve(const string &S)
{
    const int L = S.size();
    fill((ll *)dp, (ll *)dp + sizeof(dp) / sizeof(ll), 0);
    dp[0][0][0] = 1;
    rep (i, L) {
        const ll D = S[i]-'0';
        rep (j, 2) {
            rep (k, 2) {
                for (ll d = 0; d <= (j ? 9 : D); d++) {
                    dp[i+1][j || (d < D)][k || d == 4 || d == 9] += dp[i][j][k];
                }
            }
        }
    }
    return dp[L][0][1] + dp[L][1][1];
}

int main(int argc, char *argv[])
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    // input values
    ll A, B;
    cin >> A >> B;

    // dp table
    // init dp table
    // init condition
    // loop
    cout << solve(to_string(B)) - solve(to_string(A-1)) << endl;

    return 0;
}
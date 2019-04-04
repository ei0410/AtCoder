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

#define MAX_S 3100
#define MAX_T 3100

int main(int argc, char *argv[])
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    // input values
    string s, t;
    cin >> s >> t;

    // dp table
    vector<vector<int>> dp(MAX_S, vector<int>(MAX_T, 0));

    // init dp table

    // init condition

    // loop
    rep (i, s.size()) {
        rep (j, t.size()) {
            if (s[i] == t[j]) {
                chmax(dp[i+1][j+1], dp[i][j]+1);
            }
            chmax(dp[i+1][j+1], dp[i+1][j]);
            chmax(dp[i+1][j+1], dp[i][j+1]);
        }
    }

    string ans = "";
    int i = (int)s.size(), j = (int)t.size();
    while (i > 0 && j > 0) {
        if (dp[i][j] == dp[i-1][j]) {
            i--;
        } else if (dp[i][j] == dp[i][j-1]) {
            j--;
        } else {
            ans = s[i-1] + ans;
            i--;
            j--;
        }
    }

    cout << ans << endl;
    return 0;
}
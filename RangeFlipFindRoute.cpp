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

ll dp[110][110];

int main(void)
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    ll H, W;
    cin >> H >> W;

    vector<string> s(H);
    rep (i, H) {
        cin >> s[i];
    }

    rep (i, 110) {
        rep (j, 110) {
            dp[i][j] = INF;
        }
    }

    if (s[0][0] == '#') {
        dp[0][0] = 1;
    } else {
        dp[0][0] = 0;
    }

    rep (i, H) {
        rep (j, W) {
            if (i+1 < H) {
                if (s[i][j] == '.' && s[i+1][j] == '#') {
                    chmin(dp[i+1][j], dp[i][j]+1);
                } else {
                    chmin(dp[i+1][j], dp[i][j]);
                }
            }
            if (j+1 < W) {
                if (s[i][j] == '.' && s[i][j+1] == '#') {
                    chmin(dp[i][j+1], dp[i][j]+1);
                } else {
                    chmin(dp[i][j+1], dp[i][j]);
                }
            }
        }
    }

    cout << dp[H-1][W-1] << endl;
    return 0;
}
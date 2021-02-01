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

int main(void)
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    ll H, W, K;
    cin >> H >> W >> K;

    vector<string> s(H);
    rep (i, H) {
        cin >> s[i];
    }

    ll cnt = 1;
    vector<vector<ll>> ans(H, vector<ll>(W, 0));
    rep (i, H) {
        rep (j, W) {
            if (s[i][j] == '#') {
                ans[i][j] = cnt;
                cnt++;
            }
        }
    }

    rep (i, H) {
        for (ll j = 1; j < W; j++) {
            if (ans[i][j] == 0 && ans[i][j-1] != 0) {
                ans[i][j] = ans[i][j-1];
            }
        }
        for (ll j = W-2; j >= 0; j--) {
            if (ans[i][j] == 0 && ans[i][j+1] != 0) {
                ans[i][j] = ans[i][j+1];
            }
        }
    }

    rep (j, W) {
        for (ll i = 1; i < H; i++) {
            if (ans[i][j] == 0 && ans[i-1][j] != 0) {
                ans[i][j] = ans[i-1][j];
            }
        }
        for (ll i = H-2; i >= 0; i--) {
            if (ans[i][j] == 0 && ans[i+1][j] != 0) {
                ans[i][j] = ans[i+1][j];
            }
        }
    }

    rep (i, H) {
        rep (j, W) {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
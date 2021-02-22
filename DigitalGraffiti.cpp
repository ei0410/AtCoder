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

    ll H, W;
    cin >> H >> W;

    vector<string> s(H);
    rep (i, H) {
        cin >> s[i];
    }

    ll ans = 0;
    rep (i, H-1) {
        rep (j, W-1) {
            ll cnt = 0;
            rep (di, 2) {
                rep (dj, 2) {
                    if (s[i+di][j+dj] == '#') {
                        cnt++;
                    }
                }
            }
            if (cnt == 1 || cnt == 3) {
                ans++;
            }
        }
    }

    cout << ans << endl;
    return 0;
}
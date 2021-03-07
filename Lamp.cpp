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

    vector<string> S(H);
    rep (i, H) {
        cin >> S[i];
    }

    vector<vector<ll>> L(H, vector<ll>(W, 0));
    vector<vector<ll>> R(H, vector<ll>(W, 0));
    vector<vector<ll>> D(H, vector<ll>(W, 0));
    vector<vector<ll>> U(H, vector<ll>(W, 0));
    rep (i, H) {
        rep (j, W) {
            if (S[i][j] == '#') {
                L[i][j] = 0;
            } else {
                if (j == 0) {
                    L[i][j] = 1;
                } else if (j > 0) {
                    L[i][j] = L[i][j-1]+1;
                }
            }
        }
    }
    rep (i, H) {
        rrep (j, W) {
            if (S[i][j] == '#') {
                R[i][j] = 0;
            } else {
                if (j == W-1) {
                    R[i][j] = 1;
                } else if (j < W-1) {
                    R[i][j] = R[i][j+1]+1;
                }
            }
        }
    }
    rep (i, H) {
        rep (j, W) {
            if (S[i][j] == '#') {
                U[i][j] = 0;
            } else {
                if (i == 0) {
                    U[i][j] = 1;
                } else if (i > 0) {
                    U[i][j] = U[i-1][j]+1;
                }
            }
        }
    }
    rrep (i, H) {
        rep (j, W) {
            if (S[i][j] == '#') {
                D[i][j] = 0;
            } else {
                if (i == H-1) {
                    D[i][j] = 1;
                } else if (i < H-1) {
                    D[i][j] = D[i+1][j]+1;
                }
            }
        }
    }

    ll ans = 0;
    rep (i, H) {
        rep (j, W) {
            ans = max(ans, L[i][j]+R[i][j]+D[i][j]+U[i][j]-3);
        }
    }

    cout << ans << endl;
    return 0;
}
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
#define rrep(i, n) for (ll i = (n)-1; i >= 0; i--)

#define H_MAX 500
#define W_MAX 500

ll H, W;
char c[H_MAX][W_MAX];
bool reached[H_MAX][W_MAX];

void dfs(ll x, ll y) {
    if ((x < 0 || H <= x || y < 0 || W <= y) || (c[x][y] == '#')) {
        return;
    }
    if (reached[x][y]) {
        return;
    }

    reached[x][y] = true;

    dfs(x+1, y);
    dfs(x-1, y);
    dfs(x, y+1);
    dfs(x, y-1);
}
 
int main(void)
{
    cin >> H >> W;

    ll sx, sy, gx, gy;

    rep (i, H) {
        rep (j, W) {
            cin >> c[i][j];
            if (c[i][j] == 's') {
                sx = i;
                sy = j;
            }
            if (c[i][j] == 'g') {
                gx = i;
                gy = j;
            }
        }
    }

    dfs(sx, sy);

    if (reached[gx][gy]) {
        Yes
    } else {
        No
    }

    return 0;
}
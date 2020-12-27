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

#define H_MAX 50
#define W_MAX 50

char c[H_MAX][W_MAX];
ll d[H_MAX][W_MAX];

ll dy[4] = {0, 1, 0, -1};
ll dx[4] = {1, 0, -1, 0};

ll H, W;

ll bfs() {
    queue<Pll> que;

    rep (i, H) {
        rep (j, W) {
            d[i][j] = -1;
        }
    }

    que.push(Pll(0, 0));
    d[0][0] = 0;

    while (que.size()) {
        Pll p = que.front();
        que.pop();

        if (p.first == H-1 && p.second == W-1) {
            break;
        }

        rep (i, 4) {
            ll ny = p.first  + dy[i];
            ll nx = p.second + dx[i];

            if (0 <= nx && nx < W && 0 <= ny && ny <= H && c[ny][nx] != '#' && d[ny][nx] == -1) {
                que.push(Pll(ny, nx));
                d[ny][nx] = d[p.first][p.second] + 1;
            }
        }
    }

    return d[H-1][W-1];
}

int main(int argc, char *argv[])
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> H >> W;
    rep (i, H) {
        rep (j, W) {
            cin >> c[i][j];
        }
    }

    ll ans = H*W;
    rep (i, H) {
        rep (j, W) {
            if (c[i][j] == '#') {
                ans--;
            }
        }
    }

    ans -= bfs();
    ans--;

    if (bfs() == -1) {
        ans = -1;
    }

    cout << ans << endl;
    return 0;
}
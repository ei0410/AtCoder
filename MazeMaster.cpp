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
 
#define H_MAX 20
#define W_MAX 20

char S[H_MAX][W_MAX];
ll d[H_MAX][W_MAX];

ll dy[4] = {0, 1, 0, -1};
ll dx[4] = {1, 0, -1, 0};

ll H, W;

ll bfs(ll sx, ll sy, ll gx, ll gy) {
    queue<Pll> que;

    rep (i, H) {
        rep (j, W) {
            d[i][j] = -1;
        }
    }
    
    if (S[sy][sx] == '#' || S[gy][gx] == '#') {
        return 0;
    }

    que.push(Pll(sy, sx));
    d[sy][sx] = 0;

    while (que.size()) {
        Pll p = que.front();
        que.pop();

        if (p.first == gy && p.second == gx) {
            break;
        }

        rep (i, 4) {
            ll ny = p.first  + dy[i];
            ll nx = p.second + dx[i];

            if (0 <= nx && nx < W && 0 <= ny && ny <= H && S[ny][nx] != '#' && d[ny][nx] == -1) {
                que.push(make_pair(ny, nx));
                d[ny][nx] = d[p.first][p.second] + 1;
            }
        }
    }

    return d[gy][gx];
}
 
int main(void)
{
    cin >> H >> W;

    rep (i, H) {
        rep (j, W) {
            cin >> S[i][j];
        }
    }

    ll ans = 0;
    rep (i, H) {
        rep (j, W) {
            rep (k, H) {
                rep (l, W) {
                    ans = max(ans, bfs(j, i, l, k));
                }
            }
        }
    }

    cout << ans << endl;
    return 0;
}
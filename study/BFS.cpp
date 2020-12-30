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
 
#define R_MAX 50
#define C_MAX 50

char c[R_MAX][C_MAX];
ll d[R_MAX][C_MAX];

ll dy[4] = {0, 1, 0, -1};
ll dx[4] = {1, 0, -1, 0};

ll R, C;
ll sy, sx;
ll gy, gx;

ll bfs() {
    queue<Pll> que;

    rep (i, R) {
        rep (j, C) {
            d[i][j] = -1;
        }
    }

    sy -= 1;
    sx -= 1;
    gy -= 1;
    gx -= 1;

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

            if (0 <= nx && nx < C && 0 <= ny && ny <= R && c[ny][nx] != '#' && d[ny][nx] == -1) {
                que.push(make_pair(ny, nx));
                d[ny][nx] = d[p.first][p.second] + 1;
            }
        }
    }

    return d[gy][gx];
}
 
int main(void)
{
    cin >> R >> C;

    rep (i, R) {
        rep (j, C) {
            cin >> c[i][j];
        }
    }

    cout << bfs() << endl;
    return 0;
}
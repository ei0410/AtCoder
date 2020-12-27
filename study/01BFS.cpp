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

#define H_MAX 500
#define W_MAX 500

char c[H_MAX][W_MAX];

ll dy[4] = {0, 1, 0, -1};
ll dx[4] = {1, 0, -1, 0};

ll H, W;

ll bfs(void) {
    Pll s, g;
    rep (i, H) {
        rep (j, W) {
            if (c[i][j] == 's') {
                s = make_pair(i, j);
            }
            if (c[i][j] == 'g') {
                g = make_pair(i, j);
            }
        }
    }

    vector<vector<ll>> d(H, vector<ll>(W, INF));
    d[s.first][s.second] = 0;
    deque<pair<ll, Pll>> dq;
    dq.push_back(make_pair(0, s));

    while (dq.size()) {
        pair<ll, Pll> v = dq.front();
        dq.pop_front();

        d[v.second.first][v.second.second] = v.first;
        rep (i, 4) {
            ll ny = v.second.first + dy[i];
            ll nx = v.second.second+ dx[i];
            if (0 <= ny && ny < H && 0 <= nx && nx < W) {
                if (d[ny][nx] > d[v.second.first][v.second.second] + v.first) {
                    d[ny][nx] = d[v.second.first][v.second.second] + v.first;

                    if (c[ny][nx] == '#') {
                        dq.push_back(make_pair(v.first+1, make_pair(ny, nx)));
                    } else {
                        dq.push_front(make_pair(v.first, make_pair(ny, nx)));
                    }
                }
            }
        }
    }

    return d[g.first][g.second];
}

int main(void)
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> H >> W;
    rep (i, H) {
        rep (j, W) {
            cin >> c[i][j];
        }
    }

    cout << bfs() << endl;
    return 0;
}
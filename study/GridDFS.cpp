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

#define MAX_H 510
#define MAX_W 510

const ll dx[4] = {1, 0, -1, 0};
const ll dy[4] = {0, 1, 0, -1};

ll H, W;
vector<string> field;

bool seen[MAX_H][MAX_W];

void dfs(ll h, ll w) {
    seen[h][w] = true;

    rep (i, 4) {
        ll nexth = h+dx[i];
        ll nextw = w+dy[i];

        if (nexth < 0 || nexth >= H || nextw < 0 || nextw >= W || field[nexth][nextw] == '#') {
            continue;
        }

        if (seen[nexth][nextw]) {
            continue;
        }

        dfs(nexth, nextw);
    }
}

int main(void)
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> H >> W;
    field.resize(H);
    rep (i, H) {
        cin >> field[i];
    }

    ll sh, sw, gh, gw;
    rep (i, H) {
        rep (j, W) {
            if (field[i][j] == 's') {
                sh = i;
                sw = j;
            }
            if (field[i][j] == 'g') {
                gh = i;
                gw = j;
            }
        }
    }

    rep (i, H) {
        rep (j, W) {
            seen[i][j] = false;
        }
    }

    dfs(sh, sw);

    if (seen[gh][gw]) {
        Yes;
    } else {
        No;
    }
    return 0;
}
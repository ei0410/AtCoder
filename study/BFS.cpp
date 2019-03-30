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
 
#define INF (1<<31) - 1 //INT_MAX/2
#define MOD 1000000007
#define PI  acos(-1)
 
#define R_MAX 50
#define C_MAX 50

// map and scores
char c[R_MAX][C_MAX];
int  d[R_MAX][C_MAX];

// move direction
int dy[4] = {0, 1, 0, -1};
int dx[4] = {1, 0, -1, 0};

int R, C;
int sy, sx;
int gy, gx;

int bfs() {
    queue<Pii> que;

    // init scores
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            d[i][j] = -1;
        }
    }

    // No zeroindexed
    sy -= 1;
    sx -= 1;
    gy -= 1;
    gx -= 1;

    // init queue and start scores
    que.push(Pii(sy, sx));
    d[sy][sx] = 0;

    // while queue size equals zero or meet the condition
    while (que.size()) {
        // get queue front
        Pii p = que.front();
        // get out queue front
        que.pop();

        // meet the condition
        if (p.first == gy && p.second == gx) {
            break;
        }

        // search 4direction 
        for (int i = 0; i < 4; i++) {
            // next position
            int ny = p.first  + dy[i];
            int nx = p.second + dx[i];

            // check next position is in the range
            // check next position is not wall
            // check next position's score is not updated
            if (0 <= nx && nx < C && 0 <= ny && ny <= R && c[ny][nx] != '#' && d[ny][nx] == -1) {
                // add next position to queue
                que.push(P(ny, nx));
                // update next position's score
                d[ny][nx] = d[p.first][p.second] + 1;
            }
        }
    }

    return d[gy][gx];
}
 
int main(int argc, char *argv[])
{
    cin >> R >> C;
    cin >> sy >> sx;
    cin >> gy >> gx;

    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            cin >> c[i][j];
        }
    }

    cout << bfs() << endl;
    return 0;
}
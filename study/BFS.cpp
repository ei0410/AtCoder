#include <bits/stdc++.h> 
 
#define INF (1<<31) - 1 //INT_MAX/2
#define MOD 1000000007
#define PI  acos(-1)
 
using ll  = long long;
using ull = unsigned long long;

#define C_MAX 50
#define R_MAX 50

typedef std::pair<int, int> P;
char c[C_MAX][R_MAX];

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
int R, C;
int sy, sx;
int gy, gx;

int d[C_MAX][R_MAX];

int bfs() {
    std::queue<P> que;

    for (int i = 0; i < C; i++) {
        for (int j = 0; j < R; j++) {
            d[i][j] = INF;
        }
    }

    que.push(P(sx, sy));
    d[sx][sy] = 0;

    while (que.size()) {
        P p = que.front();
        que.pop();

        if (p.first == gx && p.second == gy) {
            break;
        }

        for (int i = 0; i < 4; i++) {
            int nx = p.first  + dx[i];
            int ny = p.second + dy[i];

            if (0 <= nx && nx < C && 0 <= ny && ny <= R && c[nx][ny] != '#' && d[nx][ny] == INF) {
                que.push(P(nx, ny));
                d[nx][ny] = d[p.first][p.second] + 1;
            }
        }
    }

    return d[gx][gy];
}
 
int main(int argc, char *argv[])
{
    std::cin >> R >> C;
    std::cin >> sy >> sx;
    std::cin >> gy >> gx;

    for (int i = 0; i < C; i++) {
        for (int j = 0; j < R; j++) {
            std::cin >> c[i][j];
        }
    }

    std::cout << bfs() << std::endl;
    return 0;
}
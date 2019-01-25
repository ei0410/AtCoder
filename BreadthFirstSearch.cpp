#include <bits/stdc++.h> 
 
#define INF (1<<31) - 1 //INT_MAX/2
#define MOD 1000000007
#define PI  acos(-1)
 
using ll  = long long;
using ull = unsigned long long;
using P = std::pair<int, int>;

#define R_MAX 50
#define C_MAX 50

int R, C;
int sy, sx;
int gy, gx;

char c[R_MAX][C_MAX];
int  d[R_MAX][C_MAX];

int bfs() {
    std::queue<P> que;

    int dy[4] = {0, 1, 0, -1};
    int dx[4] = {1, 0, -1, 0};
    //init
    que.push(P(sy, sx));
    d[sy][sx] = 0;
    
    while(que.size()) {
        P p = que.front();
        que.pop();

        if (p.first == gy && p.second == gx) {
            break;
        }

        for (int i = 0; i < 4; i++) {
            int ny = p.first  + dy[i];
            int nx = p.second + dx[i];
            
            if (0 <= ny && ny <= R && 0 <= nx && nx <= C && c[ny][nx] != '#' && d[ny][nx] == -1) {
                d[ny][nx] = d[p.first][p.second] + 1;
                que.push(P(ny, nx));
            }
        }
    }

    return d[gy][gx];
}

int main(int argc, char *argv[])
{
    std::cin >> R  >> C;
    std::cin >> sy >> sx;
    std::cin >> gy >> gx;

    sy -= 1;
    sx -= 1;
    gy -= 1;
    gx -= 1;

    for (int i = 0; i < R_MAX; i++) {
        for (int j = 0; j < C_MAX; j++) {
            c[i][j] = '0';
            d[i][j] = -1;
        }
    }

    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            std::cin >> c[i][j];
        }
    }

    std::cout << bfs() << std::endl;
    return 0;
}
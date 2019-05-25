#include <bits/stdc++.h> 
 
#define INF INT_MAX
#define MOD 1000000007
#define PI  acos(-1)
 
using ll  = long long;
using ull = unsigned long long;
using P = std::pair<int, int>;
 
#define XMAX 50 
#define YMAX 50 
int R, C;
int sy, sx;
int gy, gx;

char c[YMAX][XMAX];
int score[YMAX][XMAX];

int xdir[4] = {-1, 0, 1, 0};
int ydir[4] = {0, -1, 0, 1};

int BFS(int y, int x) {
    std::queue<P> q;

    q.push(P(sy, sx));
    score[sy][sx] = 0;

    while(q.size()) {
        P p = q.front();
        q.pop();

        if (p.first == gy && p.second == gx) {
            break;
        }

        for (int i = 0; i < 4; i++) {
            int tmpy = p.first  + ydir[i];
            int tmpx = p.second + xdir[i];

            if (0 <= tmpy && tmpy <= R && 0 <= tmpx && tmpx <= C && c[tmpy][tmpx] != '#' && score[tmpy][tmpx] == INF) {
                q.push(P(tmpy, tmpx));
                score[tmpy][tmpx] = score[p.first][p.second] + 1;
            }
        }
    }

    return score[gy][gx];
}

int main(int argc, char *argv[])
{
    std::cin >> R >> C;
    std::cin >> sy >> sx;
    std::cin >> gy >> gx;
    
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            std::cin >> c[i][j];
        }
    }

    sy -= 1;
    sx -= 1;
    gy -= 1;
    gx -= 1;

    for (int i = 0; i < YMAX; i++) {
        for (int j = 0; j < XMAX; j++) {
            score[i][j] = INF;
        }
    }

    std::cout << BFS(sy, sx) << std::endl;
    return 0;
}

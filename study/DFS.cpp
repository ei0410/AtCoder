#include <bits/stdc++.h> 
 
#define INF (1<<31) - 1 //INT_MAX/2
#define MOD 1000000007
#define PI  acos(-1)
 
using ll  = long long;
using ull = unsigned long long;

#define H_MAX 500
#define W_MAX 500

int H, W;
char c[H_MAX][W_MAX];
bool reached[H_MAX][W_MAX];

void dfs(int x, int y) {
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
 
int main(int argc, char *argv[])
{
    std::cin >> H >> W;
    int sx, sy, gx, gy;
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            std::cin >> c[i][j];
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
        std::cout << "Yes" << std::endl;
    } else {
        std::cout << "No"  << std::endl;
    }

    return 0;
}
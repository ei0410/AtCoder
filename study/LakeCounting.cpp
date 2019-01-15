#include <bits/stdc++.h> 
 
#define INF (1<<31) - 1 //INT_MAX/2
#define MOD 1000000007
#define PI  acos(-1)
 
using ll  = long long;
using ull = unsigned long long;

int N, M;
std::cin >> N >> M;

#define MAX_N 100
#define MAX_M 100
char field[MAX_N][MAX_M+1];

void dfs(int x, int y) {
    field[x][y] = '.';

    for (int dx = -1; dx <= 1; dx++) {
        for (int dy = -1; dy <= 1; dy++) {
            int nx = x + dx, ny = y + dy;
            if (0 <= nx && nx < N && 0 <= ny && ny < M && field[nx][ny] == 'W') {
                dfs(nx, ny);
            }
        }
    }
}
 
int main(int argc, char *argv[])
{
    int ans = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (field[i][j] == 'W') {
                dfs(i, j);
                ans++;
            }
        }
    }

    std::cout << ans << std::endl;
    return 0;
}
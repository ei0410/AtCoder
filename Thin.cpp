#include <bits/stdc++.h> 
 
#define INF (1<<31)//INT_MAX/2
#define MOD 1000000007
 
using ll  = long long;
using ull = unsigned long long;
 
int main(int argc, char *argv[])
{
    int H, W;
    std::cin >> H >> W;

    char C[H][W];
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            std::cin >> C[i][j];
        }
    }

    char ans[2*H][W];
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            if (C[i][j] == '*') {
                ans[2*i][j]   = '*';
                ans[2*i+1][j] = '*';
            } else if (C[i][j] == '.') {
                ans[2*i][j]   = '.'; 
                ans[2*i+1][j] = '.'; 
            }
        }
    }

    for (int i = 0; i < 2*H; i++) {
        for (int j = 0; j < W; j++) {
            std::cout << ans[i][j];
        }
        std::cout << std::endl;
    }

    return 0;
}
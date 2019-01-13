#include <bits/stdc++.h> 
 
#define INF (1<<31) - 1 //INT_MAX/2
#define MOD 1000000007
#define PI  acos(-1)
 
using ll  = long long;
using ull = unsigned long long;

const int MAX_N = 400;

const int di[] = {1, 0, -1, 0};
const int dj[] = {0, 1, 0, -1};

int main(int argc, char *argv[])
{
    int H, W;
    std::cin >> H >> W;

    char S[H][W];
    char ch[MAX_N + 1];

    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            std::cin >> S[i][j];
        }
    }

    int ans = 0;
    for (int i = 1; i <= H; i++) {
        for (int j = 1; j <= W; j++) {
            if (S[i][j] == '#') {
                ;
            }
        }
    }

    std::cout << ans << std::endl;
    return 0;
}
#include <bits/stdc++.h> 
 
#define INF (1<<31) - 1 //INT_MAX/2
#define MOD 1000000007
#define PI  acos(-1)
 
using ll  = long long;
using ull = unsigned long long;

int main(int argc, char *argv[])
{
    int H, W;
    std::cin >> H >> W;

    char s[H+2][W+2];
    for (int i = 0; i < H+2; i++) {
        for (int j = 0; j < W+2; j++) {
            s[i][j] = '0';
        }
    }

    for (int i = 1; i <= H; i++) {
        for (int j = 1; j <= W; j++) {
            std::cin >> s[i][j];
        }
    }

    bool flag = true;
    for (int i = 1; i <= H; i++) {
        for (int j = 1; j <= W; j++) {
            if (s[i][j] == '#') {
                if (s[i-1][j] == '.' && s[i][j-1] == '.' && s[i][j+1] == '.' && s[i+1][j] == '.') {
                    flag = false;
                }
            }
        }
    }

    if (flag) {
        std::cout << "Yes" << std::endl;
    } else {
        std::cout << "No"  << std::endl;
    }
    return 0;
}
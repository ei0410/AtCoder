#include <bits/stdc++.h> 
 
#define INF (1<<31)//INT_MAX/2
#define MOD 1000000007
 
using ll  = long long;
using ull = unsigned long long;
 
int main(int argc, char *argv[])
{
    int H, W;
    std::cin >> H >> W;

    std::vector<std::string> S(H);
    std::vector<std::string> dummy(H);

    for (int i = 0; i < H; i++) {
        std::cin >> S[i];
    }

    dummy = S;

    std::vector<std::vector<char>> ans(H, std::vector<char>(W, '.'));

    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            bool flag = true;
            for (int y = -1; y <= 1; y++) {
                for (int x = -1; x <= 1; x++) {
                    if (0 <= i+y && i+y < H && 0 <= j+x && j+x < W) {
                        if (S[i+y][j+x] == '.') {
                            flag = false;
                        }
                    }
                }
            }
            if (flag) {
                ans[i][j] = '#';
                for (int y = -1; y <= 1; y++) {
                    for (int x = -1; x <= 1; x++) {
                        if (0 <= i+y && i+y < H && 0 <= j+x && j+x < W) {
                            dummy[i+y][j+x] = '.';
                        }
                    }
                }
            }
        }
    }

    bool flag = true;
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            if (dummy[i][j] == '#') {
                flag = false;
            }
        }
    }

    if (!flag) {
        std::cout << "impossible" << std::endl;
    } else {
        std::cout << "possible" << std::endl;
        for (int i = 0; i < H; i++) {
            for (int j = 0; j < W; j++) {
                std::cout << ans[i][j];
            }
            std::cout << std::endl;
        }
    }

    return 0;
}
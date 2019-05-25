#include <bits/stdc++.h>

int main(int argc, char *argv[])
{
    int H, W;
    std::cin >> H >> W;

    char S[H+2][W+2];
    char ans[H+2][W+2];

    for (int i = 0; i < H+2; i++) {
        for (int j = 0; j < W+2; j++) {
            S[i][j] = '0';
        }
    }

    for (int i = 1; i <= H; i++) {
        for (int j = 1; j <= W; j++) {
            std::cin >> S[i][j];
        }
    }

    int count = 0;

    for (int i = 1; i <= H; i++) {
        for (int j = 1; j <= W; j++) {
            count = 0;
            if (S[i][j] == '.') {
                if (S[i-1][j-1] == '#') {
                    count++;
                }
                if (S[i-1][j] == '#') {
                    count++;
                }
                if (S[i-1][j+1] == '#') {
                    count++;
                }
                if (S[i][j-1] == '#') {
                    count++;
                }
                if (S[i][j+1] == '#') {
                    count++;
                }
                if (S[i+1][j-1] == '#') {
                    count++;
                }
                if (S[i+1][j] == '#') {
                    count++;
                }
                if (S[i+1][j+1] == '#') {
                    count++;
                }
                ans[i][j] = count + '0';
            } else {
                ans[i][j] = '#';
            }
        }
    }

    for (int i = 1; i <= H; i++) {
        for (int j = 1; j <= W; j++) {
            std::cout << ans[i][j];
        }
        std::cout << "" << std::endl;
    }

    return 0;
}

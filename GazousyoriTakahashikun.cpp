#include <bits/stdc++.h>

int main(int argc, char *argv[])
{
    int H, W;
    std::cin >> H >> W;

    char S[H+2][W+2];
    char ans[H+2][W+2];
    char ans_dum[H+2][W+2];
    char dum[H][W];

    for (int i = 0; i < H+2; i++) {
        for (int j = 0; j < W+2; j++) {
            S[i][j] = '#';
        }
    }

    for (int i = 1; i <= H; i++) {
        for (int j = 1; j <= W; j++) {
            std::cin >> S[i][j];
        }
    }

    for (int i = 1; i <= H; i++) {
        for (int j = 1; j <= W; j++) {
            dum[i-1][j-1] = S[i][j];
        }
    }

    for (int i = 0; i < H+2; i++) {
        for (int j = 0; j < W+2; j++) {
            ans[i][j] = S[i][j];
        }
    }

    for (int i = 0; i < H+2; i++) {
        for (int j = 0; j < W+2; j++) {
            if ((S[i-1][j-1] == '#') && (S[i][j-1] == '#') && (S[i+1][j-1] == '#') && (S[i-1][j] == '#') && (S[i][j] == '#') && (S[i+1][j] == '#') && (S[i-1][j+1] == '#') && (S[i][j+1] == '#') && (S[i+1][j+1] == '#')) {
                ans[i][j] = '#';
            } else {
                ans[i][j] = '.';
            }
        }
    }

    for (int i = 0; i < H+2; i++) {
        for (int j = 0; j < W+2; j++) {
            ans_dum[i][j] = ans[i][j];
        }
    }

    for (int i = 0; i < H+2; i++) {
        for (int j = 0; j < W+2; j++) {
            if (ans[i][j] == '#') {
                
            }
        }
    }

    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            std::cout << dum[i][j];
        }
        std::cout << "" << std::endl;
    }

    return 0;
}
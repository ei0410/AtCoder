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

    std::vector<std::string> S(H+2);
    for (int i = 0; i < H+2; i++) {
        for (int j = 0; j < W+2; j++) {
            S[i].push_back('0');
        }
    }
    for (int i = 1; i <= H; i++) {
        for (int j = 1; j <= W; j++) {
            std::cin >> S[i][j];
        }
    }

    for (int i = 0; i < H+2; i++) {
        for (int j = 0; j < W+2; j++) {
            std::cout << S[i][j];
        }
        std::cout << std::endl;
    }
    return 0;
}
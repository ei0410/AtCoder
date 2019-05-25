#include <bits/stdc++.h> 
 
#define INF (1<<31) - 1 //INT_MAX/2
#define MOD 1000000007
#define PI  acos(-1)
 
using ll  = long long;
using ull = unsigned long long;

int main(int argc, char *argv[])
{
    int H = 3;
    int W = 3;
    int c[H][W];

    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            std::cin >> c[i][j];
        }
    }

    bool flag = false;

    if (flag) {
        std::cout << "Yes" << std::endl;
    } else {
        std::cout << "No"  << std::endl;
    }

    return 0;
}
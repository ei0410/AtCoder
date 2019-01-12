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
    std::vector<std::vector<int>> c(H std::vector<int>(W, 0));

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

    /*
    for (auto v1 : c) {
        for (auto v2 : v1) {
            std::cout << v2;
        }
        std::cout << std::endl;
    }
    */
    return 0;
}
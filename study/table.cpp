#include <bits/stdc++.h> 
 
#define INF (1<<31)//INT_MAX/2
#define MOD 1000000007
#define PI  acos(-1)
 
using ll  = long long;
using ull = unsigned long long;
 
int main(int argc, char *argv[])
{
    int H = 3;
    int W = 3;

    std::vector<std::vector<int>> vv(H, std::vector<int>(W, 0));
    //std::vector<std::vector<int>> vv(H, std::vector<int>(W));

    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            std::cin >> vv[i][j];
        }
    }

    /*
    for (int i = 0; i < vv.size(); i++) {
        for (int j = 0; j < vv[0].size(); j++) {
            std::cout << vv[i][j];
        }
        std::cout << std::endl;
    }
    */

    for (auto v1: vv) {
        for (auto v2: v1) {
            std::cout << v2;
        }
        std::cout << std::endl;
    }

    return 0;
}
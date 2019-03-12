#include <bits/stdc++.h> 
 
#define INF INT_MAX
#define MOD 1000000007
#define PI  acos(-1)
 
using ll  = long long;
using ull = unsigned long long;
using Pii = std::pair<int, int>;
 
int main(int argc, char *argv[])
{
    std::vector<std::vector<int>> vv(5, std::vector<int>(4, 0));

    /*
    std::vector<std::vector<int>> vv;
    vv.resize(5);
    for (int i = 0; i < vv.size(); i++) {
        vv[i].resize(4);
    }

    for (int i = 0; i < vv.size(); i++) {
        for (int j = 0; j < vv[i].size(); j++) {
            vv[i][j] = 0;
        }
    }
    */

    /*
    std::vector<std::vector<int>> vv;
    vv.resize(5);
    for (int i = 0; i < vv.size(); i++) {
        vv.push_back(i);
    }
    */

    for (int i = 0; i < vv.size(); i++) {
        for (int j = 0; j < vv[i].size(); j++) {
            std::cout << vv[i][j] << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}
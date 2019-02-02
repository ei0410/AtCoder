#include <bits/stdc++.h> 
 
#define INF (1<<31) - 1 //INT_MAX/2
#define MOD 1000000007
#define PI  acos(-1)

using ll  = long long;
using ull = unsigned long long;
using P = std::pair<int, int>;

int main(int argc, char *argv[])
{
    int H1, W1, H2, W2;
    std::cin >> H1 >> W1 >> H2 >> W2;

    if (H1 == H2 || H1 == W2 || W1 == H2 || W1 == W2) {
        std::cout << "YES" << std::endl;
    } else {
        std::cout << "NO"  << std::endl;
    }
    return 0;
}
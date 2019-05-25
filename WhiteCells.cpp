#include <bits/stdc++.h> 
 
#define INF INT_MAX
#define MOD 1000000007
#define PI  acos(-1)

using ll  = long long;
using ull = unsigned long long;
using Pii = std::pair<int, int>;

int main(int argc, char *argv[])
{
    int H, W, h, w;
    std::cin >> H >> W >> h >> w;

    std::cout << H*W - W*h - (H-h)*w << std::endl;
    return 0;
}
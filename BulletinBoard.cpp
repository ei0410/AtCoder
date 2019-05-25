#include <bits/stdc++.h> 
 
#define INF (1<<31) - 1 //INT_MAX/2
#define MOD 1000000007
#define PI  acos(-1)
 
using ll  = long long;
using ull = unsigned long long;

int main(int argc, char *argv[])
{
    int N, H, W;
    std::cin >> N >> H >> W;

    std::cout << (N-W + 1) * (N-H + 1) << std::endl;
    return 0;
}
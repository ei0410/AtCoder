#include <bits/stdc++.h> 
 
#define INF (1<<31) - 1 //INT_MAX/2
#define MOD 1000000007
#define PI  acos(-1)
 
using ll  = long long;
using ull = unsigned long long;

int main(int argc, char *argv[])
{
    double N, K;
    std::cin >> N >> K;

    std::cout << std::setprecision(20) << double(((N-K)*(K-1)*6 + (N-1)*3 + 1)) / double(N*N*N) << std::endl;
    return 0;
}
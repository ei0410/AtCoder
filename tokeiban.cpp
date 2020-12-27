#include <bits/stdc++.h> 
 
#define INF (1<<31) - 1 //INT_MAX/2
#define MOD 1000000007
#define PI  acos(-1)
 
using ll  = long long;
using ull = unsigned long long;

int main(int argc, char *argv[])
{
    int n, m;
    std::cin >> n >> m;

    double lo = 6.0 * double(m);
    double sh = 30.0 * double(n % 12) + double(m) * 0.5; 

    std::cout << std::min(std::abs(lo - sh), 360.0 - std::abs(lo - sh)) << std::endl;
    return 0;
}
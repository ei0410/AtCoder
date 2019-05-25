#include <bits/stdc++.h> 
 
#define INF (1<<31) - 1 //INT_MAX/2
#define MOD 1000000007
#define PI  acos(-1)

using ll  = long long;
using ull = unsigned long long;
using P = std::pair<int, int>;

int main(int argc, char *argv[])
{
    int A1, A2, A3;
    std::cin >> A1 >> A2 >> A3;
    
    std::cout << std::max(A1, std::max(A2, A3)) - std::min(A1, std::min(A2, A3)) << std::endl;
    return 0;
}
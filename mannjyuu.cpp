#include <bits/stdc++.h> 
 
#define INF (1<<31) - 1 //INT_MAX/2
#define MOD 1000000007
#define PI  acos(-1)

using ll  = long long;
using ull = unsigned long long;
using P = std::pair<int, int>;

int main(int argc, char *argv[])
{
    int A, B, C;
    std::cin >> A >> B >> C;

    std::cout << C / std::min(A, B) << std::endl;
    return 0;
}
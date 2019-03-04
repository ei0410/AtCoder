#include <bits/stdc++.h> 
 
#define INF INT_MAX
#define MOD 1000000007
#define PI  acos(-1)
 
using ll  = long long;
using ull = unsigned long long;
using P = std::pair<int, int>;
 
int main(int argc, char *argv[])
{
    int A, B, C;
    std::cin >> A >> B >> C;

    if (B / A > C) {
        std::cout << C << std::endl;
    } else {
        std::cout << B/A << std::endl;
    }
    return 0;
}

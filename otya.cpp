#include <bits/stdc++.h> 
 
#define INF INT_MAX
#define MOD 1000000007
#define PI  acos(-1)
 
using ll  = long long;
using ull = unsigned long long;
using P = std::pair<int, int>;
 
int main(int argc, char *argv[])
{
    int A, B;
    std::cin >> A >> B;

    if (B % A == 0) {
        std::cout << B/A << std::endl;
    } else {
        std::cout << B/A + 1 << std::endl;
    }
    return 0;
}

#include <bits/stdc++.h> 
 
#define INF INT_MAX
#define MOD 1000000007
#define PI  acos(-1)
 
using ll  = long long;
using ull = unsigned long long;
using P = std::pair<int, int>;
 
int main(int argc, char *argv[])
{
    int N;
    std::cin >> N;

    if (N % 2 == 0) {
        std::cout << N/2 << std::endl;
    } else {
        std::cout << N/2 + 1 << std::endl;
    }
    return 0;
}

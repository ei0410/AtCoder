#include <bits/stdc++.h> 
 
#define INF INT_MAX
#define MOD 1000000007
#define PI  acos(-1)

using ll  = long long;
using ull = unsigned long long;
using P = std::pair<int, int>;

int main(int argc, char *argv[])
{
    int N, A, B;
    std::cin >> N;
    
    if (N == 1) {
        std::cout << "Hello World" << std::endl;
    } else {
        std::cin >> A >> B;
        std::cout << A+B << std::endl;
    }
    return 0;
}
#include <bits/stdc++.h> 
 
#define INF (1<<31) - 1 //INT_MAX/2
#define MOD 1000000007
#define PI  acos(-1)

using ll  = long long;
using ull = unsigned long long;
typedef std::pair<int, int> P;

int main(int argc, char *argv[])
{
    int A, B, C, D;
    std::cin >> A >> B >> C >> D;

    if (double(B)/double(A) < double(D)/double(C)) {
        std::cout << "AOKI" << std::endl;
    } else if (double(B)/double(A) > double(D)/double(C)) {
        std::cout << "TAKAHASHI" << std::endl;
    } else {
        std::cout << "DRAW" << std::endl;
    }
    return 0;
}
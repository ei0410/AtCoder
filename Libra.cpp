#include <bits/stdc++.h> 
 
#define INF (1<<31)//INT_MAX/2
#define MOD 1000000007
 
using ll  = long long;
using ull = unsigned long long;
 
int main(int argc, char *argv[])
{
    int A, B, C, D;
    std::cin >> A >> B >> C >> D;

    int L = A + B;
    int R = C + D;

    if (L > R) {
        std::cout << "Left" << std::endl;
    } else if (L < R) {
        std::cout << "Right" << std::endl;
    } else {
        std::cout << "Balanced" << std::endl;
    }

    return 0;
}
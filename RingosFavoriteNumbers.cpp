#include <bits/stdc++.h> 
 
#define INF (1<<31)//INT_MAX/2
#define MOD 1000000007
 
using ll  = long long;
using ull = unsigned long long;
 
int main(int argc, char *argv[])
{
    int D, N;
    std::cin >> D >> N;

    if (D == 0) {
        if (N == 100) {
            std::cout << 101 << std::endl;
        } else {
            std::cout << N << std::endl;
        }
    } else if (D == 1) {
        if (N == 100) {
            std::cout << 10100 << std::endl;
        } else {
            std::cout << N * 100 << std::endl;
        }
    } else {
        if (N == 100) {
            std::cout << 1010000 << std::endl;
        } else {
            std::cout << N * 10000 << std::endl;
        }
    }
    return 0;
}
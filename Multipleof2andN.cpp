#include <bits/stdc++.h> 
 
#define INF (1<<31)//INT_MAX/2
#define MOD 1000000007
 
using ll  = long long;
using ull = unsigned long long;
 
int main(int argc, char *argv[])
{
    int N;
    std::cin >> N;

    if (N % 2 == 0) {
        std::cout << N << std::endl;
    } else {
        std::cout << 2*N << std::endl;
    }

    return 0;
}
#include <bits/stdc++.h> 
 
#define INF (1<<31)//INT_MAX/2
#define MOD 1000000007
 
using ll  = long long;
using ull = unsigned long long;
 
int main(int argc, char *argv[])
{
    int N, K;
    std::cin >> N >> K;

    if (N % K == 0) {
        std::cout << 0 << std::endl;
    } else {
        std::cout << 1 << std::endl;
    }
    return 0;
}
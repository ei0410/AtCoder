#include <bits/stdc++.h> 
 
#define INF (1<<31)//INT_MAX/2
#define MOD 1000000007
 
using ll  = long long;
using ull = unsigned long long;
 
int main(int argc, char *argv[])
{
    int K;
    std::cin >> K;

    int even = K / 2;
    int odd = 0;
    if (K % 2 == 0) {
        odd = K / 2;
    } else {
        odd = K / 2 + 1;
    }

    std::cout << even * odd << std::endl; 
    return 0;
}
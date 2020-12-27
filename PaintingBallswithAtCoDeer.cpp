#include <bits/stdc++.h> 
 
#define INF (1<<31)//INT_MAX/2
#define MOD 1000000007
 
using ll  = long long;
using ull = unsigned long long;
 
int main(int argc, char *argv[])
{
    int N, K;
    std::cin >> N >> K;
    
    int ans = 1;
    ans *= K;

    for (int i = 0; i < N-1; i++) {
        ans *= (K-1);
    }

    std::cout << ans << std::endl;
    return 0;
}
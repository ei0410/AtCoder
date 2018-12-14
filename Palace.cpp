#include <bits/stdc++.h> 
 
#define INF (1<<31)//INT_MAX/2
#define MOD 1000000007
 
using ll  = long long;
using ull = unsigned long long;
 
int main(int argc, char *argv[])
{
    int N;
    int T, A;

    std::cin >> N;
    std::cin >> T >> A;

    int min = 1<<30;
    int ans = 0;
    for (int i = 1; i <= N; i++) {
        int H = 0;
        std::cin >> H;
        int d = std::abs((T*1000 - H*6) - A*1000);
        if (min > d) {
            min = d;
            ans = i;
        }
    }

    std::cout << ans << std::endl;

    return 0;
}
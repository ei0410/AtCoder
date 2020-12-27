#include <bits/stdc++.h> 
 
#define INF (1<<31)//INT_MAX/2
#define MOD 1000000007
 
using ll  = long long;
using ull = unsigned long long;
 
int main(int argc, char *argv[])
{
    ull a, b, x;
    std::cin >> a >> b >> x;
    ull adiv, bdiv = b/x;

    if (a) {
        adiv = (a-1) / x; 
    } else {
        adiv = -1;
    }
    ull ans = bdiv - adiv;

    std::cout << ans << std::endl;
    return 0;
}
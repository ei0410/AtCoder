#include <bits/stdc++.h> 
 
#define INF (1<<31)//INT_MAX/2
#define MOD 1000000007
 
using lli  = long long int;
using ull = unsigned long long;
 
int main(int argc, char *argv[])
{
    lli X, Y; 
    std::cin >> X >> Y;

    lli Z = X;

    int ans = 0;

    while (Z <= Y) {
        Z = 2*Z;
        ans++;
    }

    std::cout << ans << std::endl;

    return 0;
}
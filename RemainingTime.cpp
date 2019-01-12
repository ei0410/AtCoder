#include <bits/stdc++.h> 
 
#define INF (1<<31) - 1 //INT_MAX/2
#define MOD 1000000007
#define PI  acos(-1)
 
using ll  = long long;
using ull = unsigned long long;

int main(int argc, char *argv[])
{
    int A, B;
    std::cin >> A >> B;

    int ans = 0;
    if (A + B >= 24) {
        ans = A + B - 24;
    } else {
        ans = A + B;
    }

    std::cout << ans << std::endl;
    return 0;
}
#include <bits/stdc++.h> 
 
#define INF (1<<31) - 1 //INT_MAX/2
#define MOD 1000000007
#define PI  acos(-1)
 
using ll  = long long;
using ull = unsigned long long;

int main(int argc, char *argv[])
{
    int a[5];
    for (int i = 0; i < 5; i++) {
        std::cin >> a[i];
    }

    std::sort(a, a+5);
    std::cout << std::max(a[0]+a[3]+a[4], a[1]+a[2]+a[4]) << std::endl;
    return 0;
}
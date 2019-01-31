#include <bits/stdc++.h> 
 
#define INF (1<<31) - 1 //INT_MAX/2
#define MOD 1000000007
#define PI  acos(-1)

using ll  = long long;
using ull = unsigned long long;
using P = std::pair<int, int>;

int main(int argc, char *argv[])
{
    int x, y;
    std::cin >> x >> y;

    int a[12] = {1, 2, 1, 3, 1, 3, 1, 1, 3, 1, 3, 1};
    if (a[x-1] == a[y-1]) {
        std::cout << "Yes" << std::endl;
    } else {
        std::cout << "No" << std::endl;
    }
    return 0;
}
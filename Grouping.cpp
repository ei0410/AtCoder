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

    if ((x == 1 || x == 2 || x == 3 || x == 5 || x == 7 || x == 8 || x == 10 || x == 12) && (y == 2 || y == 4 || y == 6 || y == 9 || y == 11)) {
        std::cout << "No" << std::endl;
    } else if ((y == 1 || y == 2 || y == 3 || y == 5 || y == 7 || y == 8 || y == 10 || y == 12) && (x == 2 || x == 4 || x == 6 || x == 9 || x == 11)) {
        std::cout << "No" << std::endl;
    } else {
        std::cout << "Yes" << std::endl;
    }
    return 0;
}
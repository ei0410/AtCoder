#include <bits/stdc++.h> 
 
#define INF INT_MAX
#define MOD 1000000007
#define PI  acos(-1)
 
using ll  = long long;
using ull = unsigned long long;
using P = std::pair<int, int>;
 
int main(int argc, char *argv[])
{
    double xa, ya, xb, yb, xc, yc;
    std::cin >> xa >> ya >> xb >> yb >> xc >> yc;

    std::cout << std::fixed;
    std::cout << std::setprecision(1) << std::abs((xb - xa)*(yc - ya) - (yb - ya)*(xc - xa))/2.0 << std::endl;
    return 0;
}

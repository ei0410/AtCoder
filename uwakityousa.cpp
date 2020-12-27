#include <bits/stdc++.h> 
 
#define INF INT_MAX
#define MOD 1000000007
#define PI  acos(-1)

using ll  = long long;
using ull = unsigned long long;
using P = std::pair<int, int>;

int main(int argc, char *argv[])
{
    double txa, tya, txb, tyb, T, V;
    int n;

    std::cin >> txa >> tya >> txb >> tyb >> T >> V >> n;
    
    std::vector<int> x(n), y(n);
    for (int i = 0; i < n; i++) {
        std::cin >> x[i] >> y[i];
    }

    bool flag = false;
    for (int i = 0; i < n; i++) {
        double dist1 = std::sqrt(std::pow((x[i] - txa), 2) + std::pow((y[i] - tya), 2));
        double dist2 = std::sqrt(std::pow((x[i] - txb), 2) + std::pow((y[i] - tyb), 2));
        if (T*V >= dist1+dist2) {
            flag = true;
        }
    }

    if (flag) {
        std::cout << "YES" << std::endl;
    } else {
        std::cout << "NO"  << std::endl;
    }
    return 0;
}
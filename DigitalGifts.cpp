#include <bits/stdc++.h> 
 
#define INF INT_MAX
#define MOD 1000000007
#define PI  acos(-1)
 
using ll  = long long;
using ull = unsigned long long;
using P = std::pair<int, int>;
 
int main(int argc, char *argv[])
{
    int N;
    std::cin >> N;

    std::vector<double> x(N);
    std::vector<std::string> u(N);
    for (int i = 0; i < N; i++) {
        std::cin >> x[i] >> u[i];
    }

    double ans = 0;
    for (int i = 0; i < N; i++) {
        if (u[i] == "BTC") {
            ans += x[i] * 380000.0;
        } else {
            ans += x[i];
        }
    }

    std::cout << ans << std::endl;
    return 0;
}

#include <bits/stdc++.h> 
 
#define INF INT_MAX
#define MOD 1000000007
#define PI  acos(-1)
 
using ll  = long long;
using ull = unsigned long long;
using P = std::pair<int, int>;
 
int main(int argc, char *argv[])
{
    double N;
    std::cin >> N;

    double ans = 0;
    for (int i = 1; i <= N; i++) {
        ans += 10000*i * (1.0/N);
    }

    std::cout << ans << std::endl;
    return 0;
}

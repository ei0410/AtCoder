#include <bits/stdc++.h> 
 
#define INF (1<<31) - 1 //INT_MAX/2
#define MOD 1000000007
#define PI  acos(-1)

using ll  = long long;
using ull = unsigned long long;
using P = std::pair<int, int>;

int main(int argc, char *argv[])
{
    ll N, M;
    std::cin >> N >> M;

    ll ans = 0;
    if (2*N >= M) {
        ans = M/2;
    } else {
        ans = N;
        M -= 2*N;
        ans += M/4;
    }

    std::cout << ans << std::endl;
    return 0;
}
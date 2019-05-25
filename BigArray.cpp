#include <bits/stdc++.h> 
 
#define INF (1<<31) - 1 //INT_MAX/2
#define MOD 1000000007
#define PI  acos(-1)

using ll  = long long;
using ull = unsigned long long;
using P = std::pair<int, int>;

int main(int argc, char *argv[])
{
    ll N, K;
    std::cin >> N >> K;

    std::vector<P> p(N);
    for (int i = 0; i < N; i++) {
        std::cin >> p[i].first >> p[i].second;
    }

    std::sort(p.begin(), p.end());

    ll sum = 0;
    ll ans = 0;
    for (int i = 0; i < N; i++) {
        sum += p[i].second;
        if (sum >= K) {
            ans = p[i].first;
            break;
        }
    }

    std::cout << ans << std::endl;
    return 0;
}
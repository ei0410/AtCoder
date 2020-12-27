#include <bits/stdc++.h> 
 
#define INF (1<<31) - 1 //INT_MAX/2
#define MOD 1000000007
#define PI  acos(-1)

using ll  = long long;
using ull = unsigned long long;
using P = std::pair<int, int>;

int main(int argc, char *argv[])
{
    int N, K;
    std::cin >> N >> K;

    std::vector<int> a(N);
    for (int i = 0; i < N; i++) {
        std::cin >> a[i];
    }

    std::vector<ll> sum(N-K+1);
    for (int i = 0; i < K; i++) {
        sum[0] += a[i];
    }

    for (int i = 1; i < N-K+1; i++) {
        sum[i] = a[i+K-1] + sum[i-1] - a[i-1];
    }

    ll ans = 0;
    for (int i = 0; i < sum.size(); i++) {
        ans += sum[i];
    }

    std::cout << ans << std::endl;
    return 0;
}
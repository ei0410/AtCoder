#include <bits/stdc++.h> 
 
#define INF INT_MAX
#define MOD 1000000007
#define PI  acos(-1)
 
using ll  = long long;
using ull = unsigned long long;
using Pii = std::pair<int, int>;
using Pll = std::pair<ll, ll>;
 
int main(int argc, char *argv[])
{
    ll N, M;
    std::cin >> N >> M;
    
    std::vector<Pll> p(N);
    for (ll i = 0; i < N; i++) {
        ll A, B;
        std::cin >> A >> B;
        p[i].first  = A;
        p[i].second = B;
    } 

    std::sort(p.begin(), p.end());

    ll ans = 0;
    for (ll i = 0; i < N; i++) {
        if (p[i].second > M) {
            ans += M * p[i].first;
            break;
        } else {
            M -= p[i].second;
            ans += p[i].first * p[i].second;
        }
    }

    std::cout << ans << std::endl;
    return 0;
}

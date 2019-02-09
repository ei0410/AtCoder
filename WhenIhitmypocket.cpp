#include <bits/stdc++.h> 
 
#define INF INT_MAX
#define MOD 1000000007
#define PI  acos(-1)
 
using ll  = long long;
using ull = unsigned long long;
using P = std::pair<int, int>;
 
int main(int argc, char *argv[])
{
    ll K, A, B;
    std::cin >> K >> A >> B;

    ll N = 1;
    ll ans = 0;
    if (A+1 < B) {
        if (K <= A) {
            ans = K+1;
        } else {
            K -= A+1;
            ans += B;
            ans += (K / (A+2)) * B;
            ans += K % (A+2);
        }
    } else {
        ans = K+1;
    }

    std::cout << ans << std::endl;
    return 0;
}

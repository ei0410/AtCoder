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

    ll ans = 0;
    if (B > A+2) {
        if (A-1 > K) {
            ans = 1+K;
        } else {
            K -= (A-1);
            ans += A;
            if (K % 2 == 0) {
                ans += (K/2) * (B-A); 
            } else {
                ans += (K/2) * (B-A) + 1;
            }
        }
    } else {
        ans = 1+K;
    }

    std::cout << ans << std::endl;
    return 0;
}

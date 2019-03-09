#include <bits/stdc++.h> 
 
#define INF INT_MAX
#define MOD 1000000007
#define PI  acos(-1)
 
using ll  = long long;
using ull = unsigned long long;
using Pii = std::pair<int, int>;
 
int main(int argc, char *argv[])
{
    std::string S;
    std::cin >> S;

    int n = S.size();

    ll ans = 0;
    for (ll bit = 0; bit < (1<<(S.size()-1)); bit++) {
        ll number = S[0] - '0'; 
        for (int i = 0; i < S.size()-1; i++) {
            if (bit & (1<<i)) {
                ans += number;
                number = 0;
            }
            number = number * 10 + S[i+1] - '0';
        }
        ans += number;
    }

    std::cout << ans << std::endl;
    return 0;
}

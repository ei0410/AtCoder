#include <bits/stdc++.h> 
 
#define INF INT_MAX
#define MOD 1000000007
#define PI  acos(-1)
 
using ll  = long long;
using ull = unsigned long long;
using P = std::pair<int, int>;
 
int main(int argc, char *argv[])
{
    std::string W;
    std::cin >> W;

    std::string ans;
    for (int i = 0; i < W.size(); i++) {
        if (W[i] == 'a' || W[i] == 'i' || W[i] == 'u' || W[i] == 'e' || W[i] == 'o') {
            ;
        } else {
            ans += W[i];
        }
    }

    std::cout << ans << std::endl;
    return 0;
}

#include <bits/stdc++.h> 
 
#define INF (1<<31) - 1 //INT_MAX/2
#define MOD 1000000007
#define PI  acos(-1)

using ll  = long long;
using ull = unsigned long long;
using P = std::pair<int, int>;

int main(int argc, char *argv[])
{
    std::string S;
    std::cin >> S;

    bool pre_state = true;
    if (S[0] == 'B') {
        pre_state = true;
    } else if (S[0] == 'W') {
        pre_state = false;
    }

    int ans = 0;
    bool state = true;
    for (int i = 1; i < S.size(); i++) {
        if (S[i] == 'B') {
            state = true;
        } else if (S[i] == 'W') {
            state = false;
        }

        if (pre_state != state) {
            ans++;
        }
        pre_state = state;
    }

    std::cout << ans << std::endl;
    return 0;
}
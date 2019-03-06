#include <bits/stdc++.h> 
 
#define INF INT_MAX
#define MOD 1000000007
#define PI  acos(-1)

using ll  = long long;
using ull = unsigned long long;
using P = std::pair<int, int>;

int main(int argc, char *argv[])
{
    std::string S;
    std::cin >> S;

    int T;
    std::cin >> T;

    int ans = 0;
    int x = 0;
    int y = 0;

    for (int i = 0; i < S.size(); i++) {
        if (S[i] == 'L') {
            x--;
        } else if (S[i] == 'R') {
            x++;
        } else if (S[i] == 'U') {
            y++;
        } else if (S[i] == 'D') {
            y--; 
        } else if (S[i] == '?') {
            ans++;
        }
    }

    int dist = std::abs(x) + std::abs(y);

    if (T == 1) {
        ans = dist + ans;
    } else {
        if (dist > ans) {
            ans = dist - ans;
        } else {
            if ((ans-dist) % 2 == 0) {
                ans = 0;
            } else {
                ans = 1;
            }
        }
    }

    std::cout << ans << std::endl;
    return 0;
}
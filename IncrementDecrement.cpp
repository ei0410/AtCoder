#include <bits/stdc++.h> 
 
#define INF (1<<31) - 1 //INT_MAX/2
#define MOD 1000000007
#define PI  acos(-1)

using ll  = long long;
using ull = unsigned long long;
using P = std::pair<int, int>;

int main(int argc, char *argv[])
{
    int N;
    std::cin >> N;

    std::string S;
    std::cin >> S;

    int x = 0;
    int ans = 0;
    for (int i = 0; i < S.size(); i++) {
        if (S[i] == 'I') {
            x++;
        } else if (S[i] == 'D') {
            x--;
        }

        if (ans < x) {
            ans = x;
        }
    }

    std::cout << ans << std::endl;
    return 0;
}
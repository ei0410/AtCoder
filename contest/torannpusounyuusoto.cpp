#include <bits/stdc++.h> 
 
#define INF INT_MAX
#define MOD 1000000007
#define PI  acos(-1)
 
using ll  = long long;
using ull = unsigned long long;
using P = std::pair<int, int>;
 
int main(int argc, char *argv[])
{
    int N;
    std::cin >> N;

    std::vector<int> c(N);
    for (int i = 0; i < N; i++) {
        std::cin >> c[i];
    }

    int ans = 0;
    int tmp = c[0];
    for (int i = 1; i < N; i++) {
        if (tmp > c[i]) {
            ans++;
        } else {
            tmp = c[i];
        }
    }

    std::cout << ans << std::endl;
    return 0;
}

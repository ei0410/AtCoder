#include <bits/stdc++.h> 
 
#define INF (1<<31) - 1 //INT_MAX/2
#define MOD 1000000007
#define PI  acos(-1)
 
using ll  = long long;
using ull = unsigned long long;
using P = std::pair<int, int>;
 
int main(int argc, char *argv[])
{
    int N, M;
    std::cin >> N >> M;

    std::vector<int> X(M);
    for (int i = 0; i < M; i++) {
        std::cin >> X[i];
    }

    int ans = 0;
    if (N >= M) {
        ans = 0;
    } else {
        std::sort(X.begin(), X.end());
        std::vector<int> diff(M-1);
        for (int i = 0; i < M-1; i++) {
            diff[i] = X[i+1] - X[i];
        }

        std::sort(diff.begin(), diff.end());
        for (int i = 0; i < M-N; i++) {
            ans += diff[i];
        }
    }

    std::cout << ans << std::endl;
    return 0;
}

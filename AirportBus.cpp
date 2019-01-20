#include <bits/stdc++.h> 
 
#define INF (1<<31) - 1 //INT_MAX/2
#define MOD 1000000007
#define PI  acos(-1)
 
using ll  = long long;
using ull = unsigned long long;

int main(int argc, char *argv[])
{
    int N, C, K;
    std::cin >> N >> C >> K;

    std::vector<int> T(N);
    for (int i = 0; i < N; i++) {
        std::cin >> T[i];
    }

    std::sort(T.begin(), T.end());
    int ans = N;
    int count = C-1;
    int t = T[0];
    for (int i = 1; i < N; i++) {
        if (T[i] - t <= K && count > 0) {
            ans--;
            count--;
        } else {
            count = C-1;
            t = T[i];
        }
    }

    std::cout << ans << std::endl;

    return 0;
}
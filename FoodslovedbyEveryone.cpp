#include <bits/stdc++.h> 
 
#define INF INT_MAX
#define MOD 1000000007
#define PI  acos(-1)
 
using ll  = long long;
using ull = unsigned long long;
using P = std::pair<int, int>;
 
int main(int argc, char *argv[])
{
    int N, M;
    std::cin >> N >> M;

    std::vector<int> cnt(M, 0);
    for (int i = 0; i < N; i++) {
        int K;
        std::cin >> K;
        for (int j = 0; j < K; j++) {
            int temp;
            std::cin >> temp;
            temp--;
            ++cnt[temp];
        }
    }

    int ans = 0;
    for (int i = 0; i < M; i++) {
        if (cnt[i] == N) {
            ans++;
        }
    }

    std::cout << ans << std::endl;
    return 0;
}

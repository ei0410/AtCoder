#include <bits/stdc++.h> 
 
#define INF INT_MAX
#define MOD 1000000007
#define PI  acos(-1)

using ll  = long long;
using ull = unsigned long long;
using Pii = std::pair<int, int>;

int main(int argc, char *argv[])
{
    int N, M, C;
    std::cin >> N >> M >> C;

    std::vector<int> B(M);
    for (int i = 0; i < M; i++) {
        std::cin >> B[i];
    }

    int A[N][M];
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            std::cin >> A[i][j];
        }
    }

    int ans = 0;
    for (int i = 0; i < N; i++) {
        int tmp = 0;
        for (int j = 0; j < M; j++) {
            tmp += A[i][j] * B[j];
        }
        tmp += C;
        if (tmp > 0) {
            ans++;
        }
    }

    std::cout << ans << std::endl;
    return 0;
}
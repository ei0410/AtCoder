#include <bits/stdc++.h> 
 
#define INF (1<<31) - 1 //INT_MAX/2
#define MOD 1000000007
#define PI  acos(-1)
 
using ll  = long long;
using ull = unsigned long long;

int main(int argc, char *argv[])
{
    int N, M;
    std::cin >> N >> M;

    std::vector<int> a(N), b(N);
    for (int i = 0; i < N; i++) {
        std::cin >> a[i] >> b[i];
    }

    std::vector<int> c(M), d(M);
    for (int i = 0; i < M; i++) {
        std::cin >> c[i] >> d[i];
    }

    std::vector<int> ans;
    for (int i = 0; i < N; i++) {
        int min = 1000000000;
        int memo = 0;
        for (int j = 0; j < M; j++) {
            int temp = std::abs(a[i] - c[j]) + std::abs(b[i] - d[j]);
            if (min > temp) {
                min = temp;
                memo = j;
            }
        }
        ans.push_back(memo);
    }

    for (int i = 0; i < ans.size(); i++) {
        std::cout << ans[i] + 1 << std::endl;
    }
    return 0;
}
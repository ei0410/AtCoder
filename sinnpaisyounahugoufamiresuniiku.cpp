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

    std::vector<int> A(N);
    for (int i = 0; i < N; i++) {
        std::cin >> A[i];
    }

    int max = 0;
    for (int i = 0; i < N; i++) {
        if (max < A[i]) {
            max = A[i];
        }
    }

    int ans = 0;
    for (int i = 0; i < N; i++) {
        if (ans < A[i]) {
            if (A[i] != max) {
                ans = A[i];
            }
        }
    }

    std::cout << ans << std::endl;
    return 0;
}

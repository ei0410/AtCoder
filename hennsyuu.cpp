#include <bits/stdc++.h> 
 
#define INF (1<<31) - 1 //INT_MAX/2
#define MOD 1000000007
#define PI  acos(-1)

using ll  = long long;
using ull = unsigned long long;
using P = std::pair<int, int>;

int main(int argc, char *argv[])
{
    int N, Q;
    std::cin >> N >> Q;

    std::vector<int> L(Q), R(Q), T(Q);
    for (int i = 0; i < Q; i++) {
        std::cin >> L[i] >> R[i] >> T[i];
    }

    std::vector<int> v(N);
    for (int i = 0; i < Q; i++) {
        for (int j = L[i]-1; j < R[i]; j++) {
            v[j] = T[i];
        }
    }

    for (int i = 0; i < N; i++) {
        std::cout << v[i] << std::endl;
    }
    return 0;
}
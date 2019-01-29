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

    std::vector<int> A(N), B(N);
    for (int i = 0; i < N; i++) {
        std::cin >> A[i] >> B[i];
    }

    std::vector<int> C(N);
    for (int i = 0; i < N; i++) {
        C[i] = A[i] + B[i];
    }

    std::sort(C.rbegin(), C.rend());

    ll sum = 0;
    for (int i = 0; i < N; i++) {
        if (i % 2 == 0) {
            sum += C[i];
        }
        sum -= B[i];
    }

    std::cout << sum << std::endl;
    return 0;
}

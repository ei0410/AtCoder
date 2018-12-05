#include <bits/stdc++.h>

int main(int argc, char *argv[])
{
    int N;
    std::vector<int> A(N);
    std::vector<int> B(N);
    std::vector<int> C(N);

    std::cin >> N;

    for (int i = 0; i < N; i++) {
        std::cin >> A[i];
    }
    std::sort(A.begin(), A.end());
    int a_max = A[N-1];

    for (int i = 0; i < N; i++) {
        std::cin >> B[i];
    }
    std::sort(B.begin(), B.end());
    int b_max = B[N-1];

    for (int i = 0; i < N; i++) {
        std::cin >> C[i];
    }
    std::sort(C.begin(), C.end());
    int c_max = C[N-1];

    bool eq = false;
    int c_count = 0;

    return 0;
}
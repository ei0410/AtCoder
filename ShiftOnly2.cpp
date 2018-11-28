#include <bits/stdc++.h>

int main(int argc, char *argv[])
{
    int N;
    int A[200];

    std::cin >> N;

    for (int i = 0; i < N; i++) {
        std::cin >> A[i];
    }
    int res = 0;

    while (true) {
        bool exist_odd = false;

        for (int i = 0; i < N; ++i) {
            if (A[i] % 2 != 0) {
                exist_odd = true;
            }
        }

        if (exist_odd) {
            break;
        }

        for (int i = 0; i < N; ++i) {
            A[i] /= 2;
        }

        ++res;
    }

    std::cout << res;
    return 0;
}
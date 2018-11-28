#include <bits/stdc++.h>

int main(int argc, char *argv[])
{
    int N, X;
    std::cin >> N >> X;
    int center = N / 2;

    if ((N + 1 - X) >= X) {
        std::cout << X - 1;
    } else {
        std::cout << N - X;
    }
    return 0;
}
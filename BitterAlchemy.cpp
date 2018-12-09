#include <bits/stdc++.h>

int main(int argc, char *argv[])
{
    int N, X;
    std::cin >> N >> X;

    int vec[N];

    for (int i = 0; i < N; i++) {
        std::cin >> vec[i];
    }

    int min = 10000000;
    for (int i = 0; i < N; i++) {
        if (min > vec[i]) {
            min = vec[i];
        }
    }

    for (int i = 0; i < N; i++) {
        X -= vec[i];
    }

    int num = 0;

    while (X >= 0) {
        X -= min;
        num++;
    }

    std::cout << N + num - 1 << std::endl;

    return 0;
}
#include <bits/stdc++.h>

int main(int argc, char *argv[])
{
    int N;
    std::cin >> N;
    std::vector<int> a(N);

    for (int i = 0; i < N; i++) {
        std::cin >> a[i];
    }

    int res = 0;
    for (int i = 0; i < N; i++) {
        if (a[i] == 0) {
            res++;
        }
    }

    std::cout << res << std::endl;

    return 0;
}
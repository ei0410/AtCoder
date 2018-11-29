#include <bits/stdc++.h>

int main(int argc, char *argv[])
{
    const int INF = 100000000;
    int N;
    std::cin >> N;
    std::vector<int> a(N);

    for (int i = 0; i < N; i++) {
        std::cin >> a[i];
    }

    int res = -INF;
    for (int i = 0; i < N; i++) {
        if (res < a[i]) {
            res = a[i];
        }
    }

    std::cout << res << std::endl;

    return 0;
}
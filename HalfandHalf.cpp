#include <bits/stdc++.h>

int main(int argc, char *argv[])
{
    int A, B, C, X, Y;
    std::cin >> A >> B >> C >> X >> Y;

    int value[C];

    for (int i = 0; i < C; i++) {
        value[i] = i * 2 * C + std::max(0, X - i) * A + std::max(0, Y - i) * B;
    }

    int ans = 1000000000;
    for (int i = 0; i < C; i++) {
        if (ans > value[i]) {
            ans = value[i];
        }
    }

    std::cout << ans << std::endl;
    return 0;
}

#include <bits/stdc++.h>

int main(int argc, char *argv[])
{
    int A, B, C, X, Y;
    std::cin >> A >> B >> C >> X >> Y;

    int ans = 0;
    if ((A + B) / 2 > C) {
        if (X >= Y) {
            if (X % 2 == 0) {
                ans = X * 2 * C;
            } else {
                ans = (X + 1) * 2 * C;
            }
        } else {
            if (Y % 2 == 0) {
                ans = Y * 2 * C;
            } else {
                ans = (Y + 1) * 2 * C;
            }
        }
    } else {
        ans = A * X + B * Y;
    }

    std::cout << ans << std::endl;
    return 0;
}
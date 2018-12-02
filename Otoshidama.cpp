#include <bits/stdc++.h>

int main(int argc, char *argv[])
{
    int N, Y;
    std::cin >> N >> Y;
    int x = -1;
    int y = -1;
    int z = -1;

    for (int i = 0; i <= N; i++) {
        for (int j = 0; i + j <= N; j++) {
            int total = i * 10000 + j * 5000 + (N - i - j) * 1000;
            if (total == Y) {
                x = i;
                y = j;
                z = N - i - j;
            }
        }
    }

    std::cout << x << " " << y << " " << z << std::endl;

    return 0;
}
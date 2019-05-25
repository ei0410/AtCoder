#include <bits/stdc++.h>

int main(int argc, char *argv[])
{
    int N;
    int vec[10];

    std::cin >> N;

    for (int i = 0; i < N; i++) {
        std::cin >> vec[i];
    }

    int max = 0;
    int num = 0;
    for (int i = 0; i < N; i++) {
        if (max < vec[i]) {
            max = vec[i];
            num = i;
        }
    }

    vec[num] = vec[num] / 2;

    int ans = 0;

    for (int i = 0; i < N; i++) {
        ans += vec[i];
    }

    std::cout << ans << std::endl;

    return 0;
}
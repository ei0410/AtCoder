#include <bits/stdc++.h>

int main(int argc, char *argv[]) 
{
    int N;
    std::cin >> N;

    int ans = 1000000;
    if (N != 1) {
        for (int i = 1; i < N; i++) {
            int syou = N/i;
            int num = std::abs(syou - i) + (N - i * syou);
            if (ans > num) {
                ans = num;
            }
        }
        std::cout << ans;
    } else {
        std::cout << 0;
    }

    return 0;
}
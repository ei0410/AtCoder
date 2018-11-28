#include <bits/stdc++.h>

int main(int argc, char *argv[])
{
    int A, B, C, X;
    std::cin >> A >> B >> C >> X;

    int res = 0;

    for (int a = 0; a <= A; a++) {
        for (int b = 0; b <= B; b++) {
            for (int c = 0; c <= C; c++) {
                int total = 500*a + 100*b + 50*c;
                if (total == X) {
                    res++;
                }
            }
        }
    }

    std::cout << res;
    return 0;
}
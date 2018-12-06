#include <bits/stdc++.h>

int main(int argc, char *argv[])
{
    int N, K;
    std::cin >> N >> K;

    int num = 1;
    for (int i = 0; i < N; i++) {
        if (num*2 >= (num+K)) {
            num += K;
        } else {
            num *= 2;
        }
    }

    std::cout << num << std::endl;
    return 0;
}
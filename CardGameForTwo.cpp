#include <bits/stdc++.h>

int main(int argc, char *argv[]) {
    int N;
    std::cin >> N;

    std::vector<int> vec(N);

    for (int i = 0; i < N; i++) {
        std::cin >> vec[i];
    }

    std::sort(vec.begin(), vec.end());

    int Alice = 0;
    int Bob = 0;

    for (int i = vec.size() - 1; i >= 0; i--) {
        if (vec.size() % 2 == 0) {
            if (i % 2 != 0) {
                Alice += vec[i];
            } else {
                Bob += vec[i];
            }
        } else {
            if (i % 2 == 0) {
                Alice += vec[i];
            } else {
                Bob += vec[i];
            }
        }
    }

    std::cout << Alice - Bob;

    return 0;
}
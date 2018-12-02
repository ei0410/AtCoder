#include <bits/stdc++.h>

int main(int argc, char *argv[]) 
{
    int N;
    std::cin >> N;

    std::vector<int> a(N, 0);

    int min = 1000000;

    for (int i = 0; i <= N; i++) {
        for (int j = 0; j < 8; j++) {
            for (int k = 0; k < 7; k++) {
                int total = 0;
                if ((j == 0) && (k == 0)) {
                    total = i;
                } else if ((j == 0) && (k != 0)) {
                    total == i + int(std::pow(9, k));
                } else if ((k == 0) && (j != 0)) {
                    total == i + int(std::pow(6, j));
                } else {
                    total = i + int(std::pow(6, j)) + int(std::pow(9, k));
                }
                if (total == N) {
                    a.push_back(i + j + k);
                }
            }
        }
    }

    for (int i = 0; i < N; i++) {
        if (a[i] != 0) {
            if (a[i] < min) {
                min = a[i];
            }
        }
    }

    std::cout << min << std::endl;

    return 0;
}
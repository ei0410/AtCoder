#include <bits/stdc++.h>

int main(int argc, char *argv[])
{
    int N;
    std::cin >> N;
    std::vector<int> a(N);

    for (int i = 0; i < N; i++) {
        std::cin >> a[i];
    }

    bool res = false;
    for (int i = 0; i < N; i++) {
        if (a[i] == 0) {
            res = true;
            break;
        }
    }

    if (res) {
        std::cout << "Yes" << endl;
    } else {
        std::cout << "No"  << endl;
    }

    return 0;
}
#include <bits/stdc++.h>

int main(int argc, char *argv[])
{
    int N;
    std::cin >> N;
    std::vector<int> a(N);

    for (int i = 0; i < N; i++) {
        std::cin >> a[i];
    }

    int findID = -1;
    for (int i = 0; i < N; i++) {
        if (a[i] == 0) {
            findID = i;
            break;
        }
    }

    if (findID != -1) {
        std::cout << findID << endl;
    } else {
        std::cout << "No"  << endl;
    }

    return 0;
}
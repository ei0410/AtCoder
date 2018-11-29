#include <bits/stdc++.h>

int main(int argc, char *argv[])
{
    int N;
    std::cin >> N;
    std::vector<int> a(N);

    for (int i = 0; i < N; i++) {
        std::cin >> a[i];
    }

    std::vector<int> findIDs;
    for (int i = 0; i < N; i++) {
        if (a[i] == 0) {
            findIDs.push_back(i);
        }
    }

    std::cout << "nums of zeros: " << findIDs.size() << std::endl;

    for (int i = 0; i < (int)findIDs.size(); i++) {
        std::cout << findIDs[i] << "th" << std::endl;
    }

    return 0;
}
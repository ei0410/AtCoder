#include <bits/stdc++.h>

int main(int argc, char *argv[])
{
    int H, W;
    std::cin >> H >> W;
    std::vector<std::string> v[W];

    for (int i = 0; i < W; i++) {
        std::cin >> v[i];
    }

    for (int i = 0; i < W; i++) {
        std::cout << v[i];
    }

    return 0;
}
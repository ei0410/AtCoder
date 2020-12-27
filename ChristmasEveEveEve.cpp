#include <bits/stdc++.h>

int main(int argc, char *argv[])
{
    int D;
    std::cin >> D;

    if (D == 25) {
        std::cout << "Christmas" << std::endl;
    } else if (D == 24) {
        std::cout << "Christmas Eve" << std::endl;
    } else if (D == 23) {
        std::cout << "Christmas Eve Eve" << std::endl;
    } else if (D == 22) {
        std::cout << "Christmas Eve Eve Eve" << std::endl;
    } else {
        ;
    }

    return 0;
}
#include <bits/stdc++.h>

int main(int argc, char *argv[])
{
    std::string S;
    std::cin >> S;

    if (S == "WBWBWWBWBWBWWBWBWWBW") {
        std::cout << "Do" << std::endl;
    } else if (S == "WBWWBWBWBWWBWBWWBWBW") {
        std::cout << "Re" << std::endl;
    } else if (S == "WWBWBWBWWBWBWWBWBWBW") {
        std::cout << "Mi" << std::endl;
    } else if (S == "WBWBWBWWBWBWWBWBWBWW") {
        std::cout << "Fa" << std::endl;
    } else if (S == "WBWBWWBWBWWBWBWBWWBW") {
        std::cout << "So" << std::endl;
    } else if (S == "WBWWBWBWWBWBWBWWBWBW") {
        std::cout << "La" << std::endl;
    } else if (S == "WWBWBWWBWBWBWWBWBWWB") {
        std::cout << "Si" << std::endl;
    } else {
        ;
    }
    return 0;
}
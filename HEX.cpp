#include <bits/stdc++.h>

int main(int argc, char *argv[])
{
    char X;
    char Y;

    std::cin >> X >> Y;
    if (X > Y) {
        std::cout << '>' << std::endl;
    } else if (X < Y) {
        std::cout << '<' << std::endl;
    } else {
        std::cout << '=' << std::endl;
    }

    return 0;
}
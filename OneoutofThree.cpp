#include <bits/stdc++.h>

int main(int argc, char *argv[])
{
    int A, B, C;
    std::cin >> A >> B >> C;

    if (A == B) {
        std::cout << C << std::endl;
    } else if (B == C) {
        std::cout << A << std::endl;
    } else {
        std::cout << B << std::endl;
    }
    return 0;
}
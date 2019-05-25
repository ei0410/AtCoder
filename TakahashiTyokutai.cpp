#include <bits/stdc++.h>

int main(int argc, char *argv[])
{
    int A, B, C;
    std::cin >> A >> B >> C;

    std::cout << 2*(A*B + B*C + C*A) << std::endl;
    return 0;
}
#include <bits/stdc++.h>

int main(int argc, char *argv[])
{
    int X, Y, Z;
    int x;
    x = X;
    std::cin >> X >> Y >> Z;
    int count = 0;

    while(1) {
        if ((count+1) * (Y + Z) + Z > X) {
            break;
        }
        count++;
    }

    std::cout << count << std::endl;
    return 0;
}
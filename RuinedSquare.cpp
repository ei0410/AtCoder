#include <bits/stdc++.h>

int main(int argc, char *argv[])
{
    int X1, Y1, X2, Y2;
    std::cin >> X1 >> Y1 >> X2 >> Y2;

    int dx = X2 - X1;
    int dy = Y2 - Y1;

    std::cout << X2 - dy << " " <<  Y2 + dx << " " << X1 - dy << " " << Y1 + dx;

    return 0;
}
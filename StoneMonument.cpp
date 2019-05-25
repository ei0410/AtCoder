#include <bits/stdc++.h>

int main(int argc, char *argv[])
{
    int stone[999];
    int a, b;
    std::cin >> a >> b;
    for (int i = 0; i < 999; i++) {
        if (i == 0) {
            stone[0] = 1;
        } else {
            stone[i] = stone[i-1] + (i+1); 
        }
    }

    for (int i = 0; i < 999; i++) {
        if (i == 998) {
            break;
        }
        if ((stone[i] - a) == (stone[i+1] - b)) {
            std::cout << stone[i] - a << std::endl;
        }
    }
    return 0;
}
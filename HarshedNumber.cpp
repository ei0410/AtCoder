#include <bits/stdc++.h>

int main(int argc, char *argv[]) {
    int N;
    std::string s;
    std::cin >> N;

    int sum = 0;
    int dummy = N;
    while(dummy > 0) {
        sum += dummy % 10;
        dummy /= 10;
    }

    if (N % sum == 0) {
        std::cout << "Yes" << std::endl;
    } else {
        std::cout << "No"  << std::endl;
    }

    return 0;
}
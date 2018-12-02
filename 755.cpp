#include <bits/stdc++.h>

int main(int argc, char *argv[])
{
    int N;
    std::cin >> N;
    std::string s = std::to_string(N);

    if (s.size() <= 2) {
        std::cout << 0 << std::endl;
    } else if (s.size() == 3) {
        int value = 0;
        if (N < 357) {
            value = 0;
        } else if (N < 375) {
            value = 1;
        } else if (N < 537) {
            value = 2;
        } else if (N < 573) {
            value = 3;
        } else if (N < 735) {
            value = 4;
        } else if (N < 753) {
            value = 5;
        } else {
            value = 6;
        }
        std::cout << value << std::endl;
    } else {
        int ans    = 0;
        std::cout << ans << std::endl;
    }

    return 0;
}
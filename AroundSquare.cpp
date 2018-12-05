#include <bits/stdc++.h>

int main(int argc, char *argv[])
{
    int N;
    std::cin >> N;
    std::vector<int> square;
    for (int i = 0; i < 4 * 10000; i++) {
        square.push_back(i*i);
    }

    bool flag = false;
    int ans = 0;
    for (int i = 0; i < 4*10000; i++) {
        if (N <= square[i]) {
            if (i == 0) {
                ans = 0;
            } else if ((N - square[i]) == 0) {
                ans = square[i];
            } else {
                ans = square[i-1];
            }
            flag = true;
        }
        if (flag) {
            break;
        }
    }

    std::cout << ans << std::endl;
    return 0;
}
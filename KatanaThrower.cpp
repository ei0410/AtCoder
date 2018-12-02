#include <bits/stdc++.h>

int main(int argc, char *argv[])
{
    int N, H;
    std::cin >> N >> H;

    std::vector<int> a(N), b(N);

    int a_max = -1;
    for (int i = 0; i < N; i++) {
        std::cin >> a[i] >> b[i];
    }

    for (int i = 0; i < N; i++) {
        if (a[i] > a_max) {
            a_max = a[i];
        }
    }

    std::sort(b.begin(), b.end(), std::greater<int>());

    int count = 0;
    bool flag = true;

    for (int i = 0; i < N; i++) {
        if (b[i] < a_max) {
            break;
        }
        H -= b[i];
        count++;
        if (H <= 0) {
            flag = false;
            break;
        }
    }

    if (flag) {
        count += H/a_max + (H%a_max != 0);
    }

    std::cout << count << std::endl;

    return 0;
}
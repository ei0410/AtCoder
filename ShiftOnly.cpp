#include <bits/stdc++.h>

int main(int argc, char *argv[])
{
    int N;
    std::cin >> N;
    std::vector<int> vec;

    for (int i = 0; i < N; i++) {
        int a;
        std::cin >> a;
        vec.push_back(a);
    }

    std::vector<int> count;
    for (int i = 0; i < N; i++) {
        int c = 0;
        while(vec[i] % 2 == 0) {
            vec[i] /= 2;
            c++;
        }
        count.push_back(c);
    }

    int min = 1000000000;
    for (int i = 0; i < N; i++) {
        if (count[i] < min) {
            min = count[i];
        }
    }

    std::cout << min;

    return 0;
}
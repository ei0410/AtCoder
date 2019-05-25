#include <bits/stdc++.h>

int main(int argc, char *argv[])
{
    int N;
    std::cin >> N;
    std::vector<int> a(N);

    for (int i = 0; i < N; i++) {
        std::cin >> a[i];
    }

    std::set<int> values;

    for (int i = 0; i < N; i++) {
        values.insert(a[i]);
    }

    std::cout << values.size();
    return 0;
}
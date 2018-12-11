#include <bits/stdc++.h>

int main(int argc, char *argv[])
{
    int N;
    std::string S;

    std::cin >> N;
    std::cin >> S;

    std::set<std::string> xvalue;
    std::set<std::string> yvalue;

    int ans = -1;

    for (int i = 1; i < N; i++) {
        std::string X, Y;

        X = S.substr(0, i);
        for (int j = 0; j < i - 1; j++) {
            xvalue.insert(X[j]);
        }

        Y = S.substr(i, N - i);
        for (int j = i; j < N - i - 1; j++) {
            yvalue.insert(Y[j]);
        }

        int result = xvalue.size() + yvalue.size();
        if (ans < result) {
            ans = result;
        }
    }

    std::cout << ans << std::endl;

    return 0;
}
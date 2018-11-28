#include <bits/stdc++.h>

int main(int argc, char *argv[])
{
    int N, A, B;
    std::cin >> N >> A >> B;

    int ans = 0;
    for (int i = 0; i <= N; i++) {
        std::string str = std::to_string(i);

        int sum = 0;
        for (int j = 0; j < str.size(); j++) {
            sum += (int)(str[j] - '0'); 
        }
        if ((A <= sum) && (sum <= B)) {
            ans += i;
        }
    }

    std::cout << ans;

    return 0;
}
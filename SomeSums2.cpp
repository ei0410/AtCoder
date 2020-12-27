#include <bits/stdc++.h>

int findSumDigits(int n) {
    int sum = 0;
    while(n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main(int argc, char *argv[])
{
    int N, A, B;
    std::cin >> N >> A >> B;

    int ans = 0;

    for (int i = 0; i <= N; i++) {
        int sum = findSumDigits(i);
        if ((A <= sum) && (sum <= B)) {
            ans += i;
        }
    }

    std::cout << ans;

    return 0;
}
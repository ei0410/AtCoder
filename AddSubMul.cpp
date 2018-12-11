#include <bits/stdc++.h>

int main(int argc, char *argv[])
{
    int A, B;
    std::cin >> A >> B;

    int add = A + B;
    int sub = A - B;
    int mul = A * B;

    int ans = 0;

    if (add < sub) {
        ans = sub;
        if (sub < mul) {
            ans = mul;
        }
    } else {
        ans = add;
        if (add < mul) {
            ans = mul;
        }
    }

    std::cout << ans << std::endl;

    return 0;
}
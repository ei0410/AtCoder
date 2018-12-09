#include <bits/stdc++.h>

int main(int argc, char *argv[])
{
    std::string S;
    std::cin >> S;
    int ans = 700;

    if (S[0] == 'o') {
        ans += 100;
    } 
    if (S[1] == 'o') {
        ans += 100;
    } 
    if (S[2] == 'o') {
        ans += 100;
    }
    std::cout << ans << std::endl;
    return 0;
}
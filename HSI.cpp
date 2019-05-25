#include <bits/stdc++.h>

int main(int argc, char *argv[])
{
    int N, M;
    std::cin >> N >> M;
    int diff = N - M;

    int ans = (1900*M + 100*diff) * std::pow(2, M);
    std::cout << ans << std::endl;
    
    return 0;
}
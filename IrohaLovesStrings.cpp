#include <bits/stdc++.h> 
 
#define INF (1<<31)//INT_MAX/2
#define MOD 1000000007
 
using ll  = long long;
using ull = unsigned long long;
 
int main(int argc, char *argv[])
{
    int N, L;
    std::cin >> N >> L;

    std::vector<std::string> S(N);
    for (int i = 0; i < N; i++) {
        std::cin >> S[i];
    }

    std::sort(S.begin(), S.end());
    std::string sum;
    for (int i = 0; i < N; i++) {
        sum += S[i];
    }

    std::cout << sum << std::endl;
    return 0;
}
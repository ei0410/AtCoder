#include <bits/stdc++.h> 
 
#define INF INT_MAX
#define MOD 1000000007
#define PI  acos(-1)
 
using ll  = long long;
using ull = unsigned long long;
using P = std::pair<int, int>;
 
int main(int argc, char *argv[])
{
    int N;
    std::cin >> N;

    std::vector<std::string> s(N);
    for (int i = 0; i < N; i++) {
        std::cin >> s[i];
    }

    std::vector<int> S(N), E(N);
    for (int i = 0; i < N; i++) {
        S[i] = std::stoi(s[i].substr(0, 4));
        E[i] = std::stoi(s[i].substr(5, 4));
    }

    for (int i = 0; i < N; i++) {
        if (S[i] % 10 <= 5) {
            S[i] = (S[i] / 10) * 10;
        } else {
            S[i] = (S[i] / 10) * 10 + 5;
        }
    }
    return 0;
}

#include <bits/stdc++.h> 
 
#define INF INT_MAX
#define MOD 1000000007
#define PI  acos(-1)
 
using ll  = long long;
using ull = unsigned long long;
using P = std::pair<int, int>;
 
int main(int argc, char *argv[])
{
    int N, K;
    std::cin >> N >> K;

    std::string S;
    std::cin >> S;

    std::string ans;
    for (int i = 0; i < S.size()-1; i++) {
        if (S[i] > S[i+1]) {
            break;
        }
        if (i == S.size() - 2) {
            std::cout << S << std::endl;
            return 0;
        }
    }

    std::string T(S);
    std::sort(T.begin(), T.end());

    std::cout << S << std::endl;
    std::cout << T << std::endl;

    int cnt = 0;
    for (int i = 0; i < K; i++) {
        if (S[i] != T[i]) {
            cnt++;
        }
    }
    return 0;
}

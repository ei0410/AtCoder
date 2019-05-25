#include <bits/stdc++.h> 
 
#define INF (1<<31) - 1 //INT_MAX/2
#define MOD 1000000007
#define PI  acos(-1)
 
using ll  = long long;
using ull = unsigned long long;

int main(int argc, char *argv[])
{
    std::string S;
    std::cin >> S;

    int ans[6];
    for (int i = 0; i < 6; i++) {
        ans[i] = 0;
    }

    for (int i = 0; i < S.size(); i++) {
        for (int j = 0; j < 6; j++) {
            if (S[i] == 'A'+j) {
                ans[j]++;
            }
        }
    }

    for (int i = 0; i < 6; i++) {
        if (i != 5) {
            std::cout << ans[i] << " ";
        } else {
            std::cout << ans[i] << std::endl;
        }
    }
    return 0;
}
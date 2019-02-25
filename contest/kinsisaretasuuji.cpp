#include <bits/stdc++.h> 
 
#define INF INT_MAX
#define LLINF LLONG_MAX 
#define MOD 1000000007
#define PI  acos(-1)
 
using ll  = long long;
using ull = unsigned long long;
using P = std::pair<int, int>;

ll dp[32][2][2];

ll solve(std::string S) {
    dp[0][0][0] = 1;

    for (int i = 0; i < S.size(); i++) {
        int digit = S[i] - '0';
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 2; k++) {
                for (int l = 0; l <= (j ? 9 : digit); l++) {
                    dp[i+1][j || (l < digit)][k || l == 4 || l == 9] += dp[i][j][k];
                }
            }
        }
    }

    return dp[S.size()][0][1] + dp[S.size()][1][1];
}
 
int main(int argc, char *argv[])
{
    ll A, B;
    std::cin >> A >> B;

    for (int i = 0; i < 32; i++) {
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 2; k++) {
                dp[i][j][k] = 0;
            }
        }
    }

    std::cout << solve(std::to_string(B)) - solve(std::to_string(A-1)) << std::endl;
    return 0;
}

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

    char s[N][N];
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            std::cin >> s[i][j];
        }
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            std::cout << s[N-1-j][i];
        }
        std::cout << std::endl;
    }
    return 0;
}
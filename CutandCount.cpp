#include <bits/stdc++.h> 
 
#define INF (1<<31)//INT_MAX/2
#define MOD 1000000007
 
using ll  = long long;
using ull = unsigned long long;
 
int main(int argc, char *argv[])
{
    int N;
    std::cin >> N;

    std::string S;
    std::cin >> S;

    int max = 0;
    for (int i = 0; i < N-1; i++) {
        int count = 0;
        std::vector<int> vx(26, 0);
        std::vector<int> vy(26, 0);

        for (int x = 0; x < i+1; x++) {
            vx[S[x] - 'a']++;
        }
        for (int y = i+1; y < N; y++) {
            vy[S[y] - 'a']++;
        }

        for (int j = 0; j < 26; j++) {
            if (vx[j] * vy[j] != 0) {
                count++;
            }
        }

        max = std::max(max, count);
    }

    std::cout << max << std::endl;
    return 0;
}
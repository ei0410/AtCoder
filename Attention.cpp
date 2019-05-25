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

    std::vector<int> leftsum(N + 1, 0);
    for (int i = 0; i < N; i++) {
        if (S[i] == 'W') {
            leftsum[i+1] = leftsum[i] + 1; 
        } else {
            leftsum[i+1] = leftsum[i];
        }
    }

    std::vector<int> rightsum(N + 1, 0);
    for (int i = 0; i < N; i++) {
        if (S[N-i-1] == 'E') {
            rightsum[i+1] = rightsum[i] + 1; 
        } else {
            rightsum[i+1] = rightsum[i];
        }
    }

    int ans = 0;
    int min = MOD;
    for (int i = 0; i < N; i++) {
        ans = leftsum[i] + rightsum[N-i-1];
        if (min > ans) {
            min = ans;
        }
    }

    std::cout << min << std::endl;

    return 0;
}
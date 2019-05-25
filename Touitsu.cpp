#include <bits/stdc++.h> 
 
#define INF (1<<31) - 1 //INT_MAX/2
#define MOD 1000000007
#define PI  acos(-1)
 
using ll  = long long;
using ull = unsigned long long;
using P = std::pair<int, int>;
 
int main(int argc, char *argv[])
{
    int N;
    std::cin >> N;

    std::string A, B, C;
    std::cin >> A >> B >> C;

    int ans = 0;
    for (int i = 0; i < N; i++) {
        if (A[i] == B[i]) {
            if (A[i] != C[i]) {
                ans++;
            }
        } else {
            if (A[i] == C[i]) {
                ans++;
            } else if (B[i] == C[i]) {
                ans++;
            } else {
                ans += 2;
            }
        }
    }

    std::cout << ans << std::endl;
    return 0;
}

#include <bits/stdc++.h> 
 
#define INF (1<<31)//INT_MAX/2
#define MOD 1000000007
 
using ll  = long long;
using ull = unsigned long long;
 
int main(int argc, char *argv[])
{
    int N, T;
    std::cin >> N >> T;

    int answer = T;
    int a[200000];

    for (int i = 0; i < N; i++) {
        std::cin >> a[i];
    }

    for (int i = 0; i < N-1; i++) {
        answer += std::min(T, a[i+1] - a[i]);
    }

    std::cout << answer << std::endl;

    /*
    if (N != 1) {
        std::vector<int> t(N);
        for (int i = 0; i < N; i++) {
            std::cin >> t[i];
        }

        std::vector<int> dt(N-1);
        for (int i = 0; i < N-1; i++) {
            dt[i] = t[i+1] - t[i];
        }
    
        int ans = 0;
        for (int i = 0; i < N; i++) {
            if (dt[i] <= T) {
                ans += dt[i]; 
            } else {
                ans += T;
            }
        }

        ans += T;
        std::cout << ans << std::endl;
    } else {
        std::cout << T << std::endl;
    }
    */

    return 0;
}
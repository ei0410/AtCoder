#include <bits/stdc++.h> 
 
#define INF (1<<31)//INT_MAX/2
#define MOD 1000000007
 
using ll  = long long;
using ull = unsigned long long;
 
int main(int argc, char *argv[])
{
    int N, H, W;
    std::cin >> N >> H >> W;

    std::vector<int> a(N), b(N);
    for (int i = 0; i < N; i++) {
        std::cin >> a[i] >> b[i];
    }

    int ans = 0;
    for (int i = 0; i < N; i++) {
        if (a[i] >= H && b[i] >= W) {
            ans++;
        }
    }

    std::cout << ans << std::endl;
    return 0;
}
#include <bits/stdc++.h> 
 
#define INF (1<<31)//INT_MAX/2
#define MOD 1000000007
 
using ll  = long long;
using ull = unsigned long long;
 
int main(int argc, char *argv[])
{
    int N, x;
    std::cin >> N >> x;

    std::vector<int> a(N);
    for (int i = 0; i < N; i++) {
        std::cin >> a[i];
    }

    std::sort(a.begin(), a.end());

    int ans = 0;
    for (int i = 0; i < N; i++) {
        if (i == N - 1) {
            if (a[i] == x) {
                ans++;
            }
        } else {
            x -= a[i];
            if (x < 0) {
                break;
            }
            ans++;
        }
    }

    std::cout << ans << std::endl;
    return 0;
}
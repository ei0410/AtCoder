#include <bits/stdc++.h> 
 
#define INF (1<<31)//INT_MAX/2
#define MOD 1000000007
 
using ll  = long long;
using ull = unsigned long long;
 
int main(int argc, char *argv[])
{
    int N;
    std::cin >> N;

    std::vector<int> l(N), r(N);
    for (int i = 0; i < N; i++) {
        std::cin >> l[i] >> r[i];
    }

    int ans = 0;
    for (int i = 0; i < N; i++) {
        ans += (r[i] - l[i]) + 1;
    }

    std::cout << ans << std::endl;
    return 0;
}
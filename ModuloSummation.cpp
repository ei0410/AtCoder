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

    std::vector<int> a(N);
    for (int i = 0; i < N; i++) {
        std::cin >> a[i];
    }

    int ans = 0;
    for (int i = 0; i < N; i++) {
        ans += a[i] - 1;
    }

    std::cout << ans << std::endl;
    return 0;
}
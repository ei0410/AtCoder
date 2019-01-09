#include <bits/stdc++.h> 
 
#define INF (1<<31)//INT_MAX/2
#define MOD 1000000007
 
using ll  = long long;
using ull = unsigned long long;
 
int main(int argc, char *argv[])
{
    int N;
    std::cin >> N;

    std::vector<ll> A(N);
    for (int i = 0; i < N; i++) {
        std::cin >> A[i];
    }

    for (int i = 0; i < N; i++) {
        A[i] -= (i+1);
    }

    std::sort(A.begin(), A.end());
    
    ll b = 0;
    if (N % 2 == 0) {
        b = (A[N/2-1] + A[N/2]) / 2;
    } else {
        b = A[N/2];
    }

    ll ans = 0;
    for (int i = 0; i < N; i++) {
        ans += std::abs(A[i] - b);
    }

    std::cout << ans << std::endl;
    return 0;
}
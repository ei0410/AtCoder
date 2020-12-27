#include <bits/stdc++.h> 
 
#define INF (1<<31) - 1 //INT_MAX/2
#define MOD 1000000007
#define PI  acos(-1)
 
using ll  = long long;
using ull = unsigned long long;
using P = std::pair<int, int>;

ll bit_digit(ll a) {
    ll count = 0;
    if (a == 0) {
        return 1;
    }

    while (a > 0) {
        a /= 2;
        count++;
    }

    return count;
}

int main(int argc, char *argv[])
{
    ll N;
    std::cin >> N;

    ll K;
    std::cin >> K;

    std::vector<int> A(N);
    for (int i = 0; i < N; i++) {
        std::cin >> A[i];
    }

    ll max = 0;
    for (int i = 0; i < N; i++) {
        if (max < A[i]) {
            max = A[i];
        }
    }

    ll bmax = bit_digit(max);
    ll bK   = bit_digit(K);
    ll X = 0;
    ll ans = 0;
    if (bmax < bK) {
        for (int i = 0; i < bK - bmax; i++) {
            X += std::pow(2, bK-i-1);
        }
        for (int i = 0; i < N; i++) {
            ans += X ^ A[i];
        }
    }

    std::cout << ans << std::endl;
    return 0;
}

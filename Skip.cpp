#include <bits/stdc++.h> 
 
#define INF (1<<31) - 1 //INT_MAX/2
#define MOD 1000000007
#define PI  acos(-1)

using ll  = long long;
using ull = unsigned long long;
using P = std::pair<int, int>;

int Euc(int a, int b) {
    if (a <= 0 || b <= 0) {
        return -1;
    }
    if (a > b) {
        if (a % b == 0) {
            return b;
        } else {
            Euc(b, a % b);
        }
    } else if (a < b) {
        if (b % a == 0) {
            return a;
        } else {
            Euc(a, b % a);
        }
    } else {
        return a;
    }
}

int main(int argc, char *argv[])
{
    int N, X;
    std::cin >> N >> X;

    std::vector<int> x(N);
    for (int i = 0; i < N; i++) {
        std::cin >> x[i];
    }
    x.push_back(X);

    std::sort(x.begin(), x.end());

    int ans = 0;
    if (N == 1) {
        ans = std::abs(x[1] - x[0]);
    } else {
        ans = Euc(std::abs(x[2] - x[1]), x[1] - x[0]);
        for (int i = 2; i < N; i++) {
            ans = Euc(x[i+1] - x[i], ans);
        }
    }

    std::cout << ans << std::endl;
    return 0;
}
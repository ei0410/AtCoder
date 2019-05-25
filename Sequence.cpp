#include <bits/stdc++.h> 
 
#define INF (1<<31) - 1 //INT_MAX/2
#define MOD 1000000007
#define PI  acos(-1)
 
using ll  = long long;
using ull = unsigned long long;

int main(int argc, char *argv[])
{
    int n;
    std::cin >> n;

    std::vector<int> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    ll sum1 = 0;
    ll ans1 = 0;
    for (int i = 0; i < n; i++) {
        sum1 += a[i];

        if (i%2 == 0) {
            if (sum1 <= 0) {
                ans1 += -sum1 + 1;
                sum1 = 1;
            }
        } else {
            if (sum1 >= 0) {
                ans1 += sum1 + 1;
                sum1 = -1;
            }
        }
    }

    ll sum2 = 0;
    ll ans2 = 0;
    for (int i = 0; i < n; i++) {
        sum2 += a[i];

        if (i%2 == 0) {
            if (sum2>= 0) {
                ans2 += sum2 + 1;
                sum2 = -1;
            }
        } else {
            if (sum2 <= 0) {
                ans2 += -sum2 + 1;
                sum2 = 1;
            }
        }
    }

    std::cout << std::min(ans1, ans2) << std::endl;

    return 0;
}
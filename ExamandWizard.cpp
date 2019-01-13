#include <bits/stdc++.h> 
 
#define INF (1<<31) - 1 //INT_MAX/2
#define MOD 1000000007
#define PI  acos(-1)
 
using ll  = long long;
using ull = unsigned long long;

int main(int argc, char *argv[])
{
    int N;
    std::cin >> N;

    std::vector<int> A(N), B(N);
    for (int i = 0; i < N; i++) {
        std::cin >> A[i];
    }
    for (int i = 0; i < N; i++) {
        std::cin >> B[i];
    }

    ll Asum = 0;
    ll Bsum = 0;
    for (int i = 0; i < N; i++) {
        Asum += A[i];
    }
    for (int i = 0; i < N; i++) {
        Bsum += B[i];
    }

    int ans = 0;
    bool flag = true;

    if (Asum < Bsum) {
        ans = -1;
    } else {
        std::vector<int> sub(N);
        for (int i = 0; i < N; i++) {
            sub[i] = A[i] - B[i];
        }

        for (int i = 0; i < N; i++) {
            if (sub[i] < 0) {
                flag = false;
            }
        }

        if (flag) {
            std::cout << 0 << std::endl;
            return 0;
        }

        ll hu = 0;
        std::vector<int> sei;
        for (int i = 0; i < N; i++) {
            if (sub[i] < 0) {
                ans++;
                hu += sub[i];
            } else if (sub[i] > 0) {
                sei.push_back(sub[i]); 
            }
        }

        std::sort(sei.rbegin(), sei.rend());

        for (int i = 0; i < sei.size(); i++) {
            hu += sei[i];
            ans++;
            if (hu >= 0) {
                break;
            }
        }
    }

    std::cout << ans << std::endl;
    return 0;
}
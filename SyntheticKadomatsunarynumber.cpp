#include <bits/stdc++.h> 
 
#define INF INT_MAX
#define MOD 1000000007
#define PI  acos(-1)
 
using ll  = long long;
using ull = unsigned long long;
using Pii = std::pair<int, int>;

int main(int argc, char *argv[])
{
    int N, A, B, C;
    std::cin >> N >> A >> B >> C;

    std::vector<int> l(N, 0);
    for (int i = 0; i < N; i++) {
        std::cin >> l[i];
    }

    const int K = 4;

    int ans = INF;
    for (int i = 0; i < std::pow(K, N); i++) {
        int cost = 0;
        std::vector<int> a(3, 0);
        std::vector<int> count(3, 0);
        for (int j = 0; j < N; j++) {
            int tmp = i;

            for (int k = 0; k < j; k++) {
                tmp /= K;
            }
            tmp %= K;

            if (tmp == 1) {
                a[0] += l[j];
                count[0]++;
            } else if (tmp == 2) {
                a[1] += l[j];
                count[1]++;
            } else if (tmp == 3) {
                a[2] += l[j];
                count[2]++;
            }
        }

        cost += std::abs(A - a[0]);
        cost += std::abs(B - a[1]);
        cost += std::abs(C - a[2]);

        if (count[0] == 0 || count[1] == 0 || count[2] == 0) {
            continue;
        }

        for (int j = 0; j < 3; j++) {
            cost += 10*(count[j]-1);
        }

        ans = std::min(ans, cost);
    }

    std::cout << ans << std::endl;
    return 0;
}
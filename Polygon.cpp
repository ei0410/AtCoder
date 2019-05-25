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

    std::vector<int> L(N);
    for (int i = 0; i < N; i++) {
        std::cin >> L[i];
    }

    int max = 0;
    for (int i = 0; i < N; i++) {
        if (max < L[i]) {
            max = L[i];
        }
    }

    int sum = 0;
    for (int i = 0; i < N; i++) {
        sum += L[i];
    }

    sum -= max;

    if (sum > max) {
        std::cout << "Yes" << std::endl;
    } else {
        std::cout << "No"  << std::endl;
    }
    return 0;
}

#include <bits/stdc++.h> 
 
#define INF (1<<31)//INT_MAX/2
#define MOD 1000000007
 
using ll  = long long;
using ull = unsigned long long;
 
int main(int argc, char *argv[])
{
    int N;
    std::cin >> N;

    std::vector<int> a(N);
    for (int i = 0; i < N; i++) {
        std::cin >> a[i];
    }

    std::vector<int> value(N);
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (value[i] < std::abs(a[i]-a[j])) {
                value[i] = std::abs(a[i]-a[j]);
            }
        }
    }

    int max = 0;
    for (int i = 0; i < N; i++) {
        if (max < value[i]) {
            max = value[i];
        }
    }

    std::cout << max << std::endl;

    return 0;
}
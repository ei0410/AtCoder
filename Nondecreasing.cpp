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

    std::vector<int> a(N);
    for (int i = 0; i < N; i++) {
        std::cin >> a[i];
    }

    int max = 0;
    for (int i = 0; i < N; i++) {
        if (max < std::abs(a[i])) {
            max = a[i];
        }
    }

    for (int i = 0; i < N; i++) {
        a[i] += max;
    }
    return 0;
}
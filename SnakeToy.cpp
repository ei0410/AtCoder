#include <bits/stdc++.h> 
 
#define INF (1<<31)//INT_MAX/2
#define MOD 1000000007
 
using ll  = long long;
using ull = unsigned long long;
 
int main(int argc, char *argv[])
{
    int N, K;
    std::cin >> N >> K;

    std::vector<int> l(N);
    for (int i = 0; i < N; i++) {
        std::cin >> l[i];
    }

    std::sort(l.rbegin(), l.rend());

    int sum = 0;
    for (int i = 0; i < K; i++) {
        sum += l[i];
    }

    std::cout << sum << std::endl;
    return 0;
}
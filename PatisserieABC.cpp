#include <bits/stdc++.h> 
 
#define INF (1<<31)//INT_MAX/2
#define MOD 1000000007
 
using ll  = long long;
using ull = unsigned long long;
 
int main(int argc, char *argv[])
{
    int N, M;
    std::cin >> N >> M;

    std::vector<int> x(N);
    std::vector<int> y(N);
    std::vector<int> z(N);

    for (int i = 0; i < N; i++) {
        std::cin >> x[i] >> y[i] >> z[i];
    }

    return 0;
}
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

    std::vector<int> a(N);
    for (int i = 0; i < N; i++) {
        std::cin >> a[i];
    }

    std::vector<P> p(N);
    for (int i = 0; i < N; i++) {
        p[i].first  = a[i];
        p[i].second = i+1; 
    }

    std::sort(p.rbegin(), p.rend());
    for (int i = 0; i < N; i++) {
        std::cout << p[i].second << std::endl;
    }
    return 0;
}
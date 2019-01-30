#include <bits/stdc++.h> 
 
#define INF (1<<31) - 1 //INT_MAX/2
#define MOD 1000000007
#define PI  acos(-1)

using ll  = long long;
using ull = unsigned long long;
using P = std::pair<int, int>;

int main(int argc, char *argv[])
{
    int N, K;
    std::cin >> N >> K;

    std::vector<int> h(N);
    for (int i = 0; i < N; i++) {
        std::cin >> h[i];
    }

    std::sort(h.rbegin(), h.rend());

    std::vector<ll> v;
    for (int i = 0; i < N-K+1; i++) {
        int temp = h[i] - h[i+K-1]; 
        v.push_back(temp);
    }

    ll min = INF;
    for (int i = 0; i < v.size(); i++) {
        if (min > v[i]) {
            min = v[i];
        }
    }

    std::cout << min << std::endl;
    return 0;
}
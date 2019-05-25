#include <bits/stdc++.h> 
 
#define INF INT_MAX
#define MOD 1000000007
#define PI  acos(-1)

using ll  = long long;
using ull = unsigned long long;
using P = std::pair<int, int>;

int main(int argc, char *argv[])
{
    double N, K;
    std::cin >> N >> K;

    std::vector<int> R(N);
    for (int i = 0; i < N; i++) {
        std::cin >> R[i];
    }

    std::sort(R.begin(), R.end(), std::greater<int>());

    std::vector<int> movie;
    for (int i = 0; i < K; i++) {
        movie.push_back(R[i]);
    }

    std::sort(movie.begin(), movie.end());

    double rate = 0;
    for (int i = 0; i < K; i++) {
        rate = (rate + movie[i]) / 2.0;
    }

    std::cout << std::fixed;
    std::cout << std::setprecision(6) << rate << std::endl;
    return 0;
}
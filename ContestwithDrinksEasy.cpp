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

    std::vector<int> T(N);
    for (int i = 0; i < N; i++) {
        std::cin >> T[i];
    }

    int M;
    std::cin >> M;

    std::vector<int> P(M), X(M);
    for (int i = 0; i < M; i++) {
        std::cin >> P[i] >> X[i];
    }

    int sum = 0;
    for (int i = 0; i < N; i++) {
        sum += T[i];
    }

    for (int i = 0; i < M; i++) {
        int temp = sum;
        temp -= T[P[i]-1];
        temp += X[i];
        std::cout << temp << std::endl;
    }

    return 0;
}
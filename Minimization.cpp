#include <bits/stdc++.h> 
 
#define INF (1<<31)//INT_MAX/2
#define MOD 1000000007
 
using ll  = long long;
using ull = unsigned long long;
 
int main(int argc, char *argv[])
{
    int N, K;
    std::cin >> N >> K;

    std::vector<int> A(N);
    for (int i = 0; i < N; i++) {
        std::cin >> A[i];
    }

    int min = MOD;
    int memo = 0;
    for (int i = 0; i < N; i++) {
        if (min > A[i]) {
            min = A[i];
            memo = i;
        }
    }

    int ans = 0;
    for (int i = 0; i < K; i++) {
        while ()
    }
    return 0;
}
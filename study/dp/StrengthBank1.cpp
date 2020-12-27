#include <bits/stdc++.h> 
 
#define INF (1<<31)//INT_MAX/2
#define MOD 1000000007
 
using ll  = long long;
using ull = unsigned long long;

const int MAX_N = 100000;
int memo[MAX_N];

int rec(int n) {
    if (n == 0) {
        return 0;
    }

    if (memo[n] != -1) {
        return memo[n];
    }

    int res = n;

    for (int pow6 = 1; pow6 <= n; pow6 *= 6) {
        res = std::min(res, rec(n - pow6) + 1);
    }

    for (int pow9 = 1; pow9 <= n; pow9 *= 9) {
        res = std::min(res, rec(n - pow9) + 1);
    }

    return memo[n] = res;
}
 
int main(int argc, char *argv[])
{
    int N;
    std::cin >> N;

    for (int i = 0; i < MAX_N; i++) {
        memo[i] = -1;
    }

    std::cout << rec(N) << std::endl;
    return 0;
}
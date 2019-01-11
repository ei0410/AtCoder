#include <bits/stdc++.h> 
 
#define INF (1<<31)//INT_MAX/2
#define MOD 1000000007

#define MAX_N 10000
 
using ll  = long long;
using ull = unsigned long long;

int memo[MAX_N + 1];

int fib(int n) {
    if (n <= 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else if (n == 2) {
        return 1;
    }
    /*
    if (n <= 1) {
        return n;
    }
    */
    if (memo[n] != 0) {
        return memo[n];
    }

    return fib(n - 1) + fib(n - 2);
}
 
int main(int argc, char *argv[])
{
    int N;
    std::cin >> N;

    std::cout << fib(N) << std::endl;
    return 0;
}
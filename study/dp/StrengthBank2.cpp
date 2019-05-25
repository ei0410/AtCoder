#include <bits/stdc++.h> 
 
#define INF (1<<31)//INT_MAX/2
#define MOD 1000000007
 
using ll  = long long;
using ull = unsigned long long;

int func(int n, int a) {
    int res = 0;
    while (n > 0) {
        res += n%a;
        n /= a;
    }
    return res;
}
 
int main(int argc, char *argv[])
{
    int N;
    std::cin >> N;

    int res = N;
    for (int i = 0; i <= N; i++) {
        int temp = func(i, 6) + func(N - i, 9);
        res = std::min(res, temp);
    }

    std::cout << res << std::endl;
    return 0;
}
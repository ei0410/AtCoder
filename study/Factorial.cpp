#include <bits/stdc++.h> 
 
#define INF (1<<31)//INT_MAX/2
#define MOD 1000000007
#define PI  acos(-1)
 
using ll  = long long;
using ull = unsigned long long;

int fact(int n) {
    if (n < 0) {
        return -1;
    } else if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * fact(n - 1);
    }
}
 
int main(int argc, char *argv[])
{
    int N = 10;
    std::cout << fact(N) << std::endl;
    return 0;
}
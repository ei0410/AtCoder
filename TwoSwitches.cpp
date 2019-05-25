#include <bits/stdc++.h> 
 
#define INF (1<<31)//INT_MAX/2
#define MOD 1000000007
 
using ll  = long long;
using ull = unsigned long long;
 
int main(int argc, char *argv[])
{
    int A, B, C, D;
    std::cin >> A >> B >> C >> D;

    int ans = 0;
    if (B <= C || A >= D) {
        ans = 0;
    } else {
        if (A <= C && D <= B) {
            ans = D - C;
        } else if (C <= A && B <= D) {
            ans = B - A;
        } else if (A <= C && B <= D) {
            ans = B - C;
        } else if (C <= A && D <= B) {
            ans = D - A;
        }
    }

    std::cout << ans << std::endl;
    return 0;
}
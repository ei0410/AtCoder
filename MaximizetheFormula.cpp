#include <bits/stdc++.h> 
 
#define INF (1<<31)//INT_MAX/2
#define MOD 1000000007
 
using ll  = long long;
using ull = unsigned long long;
 
int main(int argc, char *argv[])
{
    int A, B, C;
    std::cin >> A >> B >> C;

    if (A <= B) {
        if (B <= C) {
            std::cout << 10*C + B + A << std::endl;
        } else {
            std::cout << 10*B + C + A << std::endl;
        }
    } else {
        if (A <= C) {
            std::cout << 10*C + B + A << std::endl;
        } else {
            std::cout << 10*A + C + B << std::endl;
        }
    }
    return 0;
}
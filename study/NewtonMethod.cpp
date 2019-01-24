#include <bits/stdc++.h> 
 
#define INF (1<<31) - 1 //INT_MAX/2
#define MOD 1000000007
#define PI  acos(-1)
 
using ll  = long long;
using ull = unsigned long long;
 
int main(int argc, char *argv[])
{
    double C = 0;
    std::cin >> C;

    double x = 5;

    while (1){
        double next = x - (x*x - C)/(2*x);
        if (0.001 > std::abs(next - x)) {
            break;
        }
        x = next;
    }

    std::cout << x << std::endl;
    return 0;
}
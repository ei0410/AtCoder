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

    if (N <= 59) {
        std::cout << "Bad" << std::endl;
    } else if (N <= 89) {
        std::cout << "Good" << std::endl;
    } else if (N <= 99) {
        std::cout << "Great" << std::endl;
    } else {
        std::cout << "Perfect" << std::endl;
    }
    return 0;
}
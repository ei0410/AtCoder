#include <bits/stdc++.h> 
 
#define INF (1<<31) - 1 //INT_MAX/2
#define MOD 1000000007
#define PI  acos(-1)
 
using ll  = long long;
using ull = unsigned long long;

int main(int argc, char *argv[])
{
    int A;
    std::cin >> A;

    char op;
    std::cin >> op;

    int B;
    std::cin >> B;

    if (op == '+') {
        std::cout << A + B << std::endl;
    } else {
        std::cout << A - B << std::endl;
    }
    return 0;
}
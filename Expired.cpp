#include <bits/stdc++.h> 
 
#define INF (1<<31)//INT_MAX/2
#define MOD 1000000007
 
using ll  = long long;
using ull = unsigned long long;
 
int main(int argc, char *argv[])
{
    int X, A, B;
    std::cin >> X >> A >> B;

    int C = B - A;
    if (C <= 0) {
        std::cout << "delicious" << std::endl;
    } else if (C <= X) {
        std::cout << "safe" << std::endl;
    } else {
        std::cout << "dangerous" << std::endl;
    }
    return 0;
}
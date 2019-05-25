#include <bits/stdc++.h> 
 
#define INF (1<<31)//INT_MAX/2
#define MOD 1000000007
 
using ll  = long long;
using ull = unsigned long long;
 
int main(int argc, char *argv[])
{
    int A, B;
    std::cin >> A >> B;

    if (A <= 8 && B <= 8) {
        std::cout << "Yay!" << std::endl;
    } else {
        std::cout << ":("   << std::endl;
    }
    return 0;
}
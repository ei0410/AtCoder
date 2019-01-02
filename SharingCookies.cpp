#include <bits/stdc++.h> 
 
#define INF (1<<31)//INT_MAX/2
#define MOD 1000000007
 
using ll  = long long;
using ull = unsigned long long;
 
int main(int argc, char *argv[])
{
    int A, B;
    std::cin >> A >> B;

    if ((A+B) % 3 == 0 || A % 3 == 0 || B % 3 == 0) {
        std::cout << "Possible" << std::endl;
    } else {
        std::cout << "Impossible" << std::endl;
    }
    return 0;
}
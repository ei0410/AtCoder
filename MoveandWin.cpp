#include <bits/stdc++.h> 
 
#define INF (1<<31)//INT_MAX/2
#define MOD 1000000007
 
using ll  = long long;
using ull = unsigned long long;
 
int main(int argc, char *argv[])
{
    int N, A, B;
    std::cin >> N >> A >> B;

    if (std::abs(A - B) % 2 == 0) {
        std::cout << "Alice" << std::endl;
    } else {
        std::cout << "Borys" << std::endl;
    }
    return 0;
}
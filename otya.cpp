#include <bits/stdc++.h> 
 
#define INF (1<<31) - 1 //INT_MAX/2
#define MOD 1000000007
#define PI  acos(-1)

using ll  = long long;
using ull = unsigned long long;
using P = std::pair<int, int>;

int main(int argc, char *argv[])
{
    std::string S;
    std::cin >> S;

    if (S[S.size() - 1] == 'T') {
        std::cout << "YES" << std::endl;
    } else {
        std::cout << "NO"  << std::endl;
    }
    return 0;
}
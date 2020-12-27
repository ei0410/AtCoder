#include <bits/stdc++.h> 
 
#define INF INT_MAX
#define MOD 1000000007
#define PI  acos(-1)
 
using ll  = long long;
using ull = unsigned long long;
using P = std::pair<int, int>;
 
int main(int argc, char *argv[])
{
    std::string S;
    std::cin >> S;
    
    if (std::stoi(S.substr(5, 2)) >= 5) {
        std::cout << "TBD" << std::endl;
    } else {
        std::cout << "Heisei" << std::endl;
    }
    return 0;
}

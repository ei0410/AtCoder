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

    int red  = 0;
    int blue = 0;
    for (int i = 0; i < S.size(); i++) {
        if (S[i] == '0') {
            red++;
        } else {
            blue++;
        }
    }

    std::cout << std::min(red, blue) * 2 << std::endl;
    return 0;
}

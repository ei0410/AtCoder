#include <bits/stdc++.h> 
 
#define INF INT_MAX
#define MOD 1000000007
#define PI  acos(-1)
 
using ll  = long long;
using ull = unsigned long long;
using Pii = std::pair<int, int>;
 
int main(int argc, char *argv[])
{
    std::string n;
    std::cin >> n;


    for (int i = 0; i < 3; i++) {
        if (n[i] == '1') {
            n[i] = '9';
        } else {
            n[i] = '1';
        }
    }

    std::cout << n << std::endl;
    return 0;
}

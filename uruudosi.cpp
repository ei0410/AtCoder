#include <bits/stdc++.h> 
 
#define INF INT_MAX
#define MOD 1000000007
#define PI  acos(-1)
 
using ll  = long long;
using ull = unsigned long long;
using P = std::pair<int, int>;
 
int main(int argc, char *argv[])
{
    int Y;
    std::cin >> Y;

    bool flag = false;
    if (Y % 4 == 0) {
        flag = true;
        if (Y % 100 == 0) {
            flag = false;
        } 
        if (Y % 400 == 0) {
            flag = true;
        }
    }

    if (flag) {
        std::cout << "YES" << std::endl;
    } else {
        std::cout << "NO"  << std::endl;
    }
    return 0;
}

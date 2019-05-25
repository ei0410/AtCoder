#include <bits/stdc++.h> 
 
#define INF (1<<31) - 1 //INT_MAX/2
#define MOD 1000000007
#define PI  acos(-1)
 
using ll  = long long;
using ull = unsigned long long;

int main(int argc, char *argv[])
{
    std::string A, B;
    std::cin >> A >> B;

    std::string atemp, btemp;
    atemp = A;
    btemp = B;

    int acount = 0;
    while (!atemp.empty()) {
        atemp.pop_back();
        acount++;
    }

    int bcount = 0;
    while (!btemp.empty()) {
        btemp.pop_back();
        bcount++;
    }

    if (acount > bcount) {
        std::cout << "GREATER" << std::endl;
    } else if (acount < bcount) {
        std::cout << "LESS"    << std::endl;
    } else {
        if (A > B) {
            std::cout << "GREATER" << std::endl;
        } else if (A < B) {
            std::cout << "LESS"    << std::endl;
        } else {
            std::cout << "EQUAL"   << std::endl;
        }
    }
    return 0;
}
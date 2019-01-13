#include <bits/stdc++.h> 
 
#define INF (1<<31) - 1 //INT_MAX/2
#define MOD 1000000007
#define PI  acos(-1)
 
using ll  = long long;
using ull = unsigned long long;

int main(int argc, char *argv[])
{
    std::string S;
    std::cin >> S;

    bool flag = false;
    for (int i = 0; i < S.size(); i++) {
        for (int j = i; j < S.size(); j++) {
            std::string s1, s2;
            s1 = S.substr(0, i);
            s2 = S.substr(j, S.size() - j);
            if (s1+s2 == "keyence") {
                flag = true;
            }
        }
    }

    if (flag) {
        std::cout << "YES" << std::endl;
    } else {
        std::cout << "NO"  << std::endl;
    }
    return 0;
}
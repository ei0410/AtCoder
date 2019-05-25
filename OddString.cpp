#include <bits/stdc++.h> 
 
#define INF (1<<31)//INT_MAX/2
#define MOD 1000000007
 
using ll  = long long;
using ull = unsigned long long;
 
int main(int argc, char *argv[])
{
    std::string S;
    std::cin >> S;

    std::string str;

    for (int i = 0; i < S.size(); i++) {
        if (i % 2 == 0) {
            str.push_back(S[i]); 
        }
    }

    std::cout << str << std::endl;
    return 0;
}
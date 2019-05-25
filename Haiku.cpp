#include <bits/stdc++.h> 
 
#define INF (1<<31)//INT_MAX/2
#define MOD 1000000007
 
using ll  = long long;
using ull = unsigned long long;
 
int main(int argc, char *argv[])
{
    std::string s;
    std::cin >> s;

    std::string s0, s1, s2;
    s0 = s.substr(0, 5);
    s1 = s.substr(6, 7);
    s2 = s.substr(14, 5);

    std::cout << s0 << " " << s1 << " " << s2 << std::endl;
    return 0;
}
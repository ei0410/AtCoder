#include <bits/stdc++.h> 
 
#define INF (1<<31)//INT_MAX/2
#define MOD 1000000007
 
using ll  = long long;
using ull = unsigned long long;
 
int main(int argc, char *argv[])
{
    std::string s, t;
    std::cin >> s >> t;

    std::sort(s.begin(), s.end());
    //std::sort(t.rbegin(), t.rend());
    std::sort(t.begin(), t.end(), std::greater<int>());

    if (s < t) {
        std::cout << "Yes" << std::endl;
    } else {
        std::cout << "No"  << std::endl;
    }

    return 0;
}
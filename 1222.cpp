#include <bits/stdc++.h> 
 
#define INF (1<<31)//INT_MAX/2
#define MOD 1000000007
 
using ll  = long long;
using ull = unsigned long long;
 
int main(int argc, char *argv[])
{
    std::string s;
    std::cin >> s;
    int count = 0;
    if (s[0] == '2') {
        count++;
    }
    if (s[1] == '2') {
        count++;
    }
    if (s[2] == '2') {
        count++;
    }
    if (s[3] == '2') {
        count++;
    }

    std::cout << count << std::endl;
    return 0;
}
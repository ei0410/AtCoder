#include <bits/stdc++.h> 
 
#define INF (1<<31)//INT_MAX/2
#define MOD 1000000007
 
using ll  = long long;
using ull = unsigned long long;
 
int main(int argc, char *argv[])
{
    std::string s;
    std::cin >> s;

    int max = 0;
    int count = 0;
    bool flag = false;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'A' && flag == false) {
            flag = true;
            count = i;
        }
        if (s[i] == 'Z' && flag == true) {
            int ans = i - count;
            max = ans;
        }
    }

    std::cout << max + 1 << std::endl;

    return 0;
}
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
    for (int i = 0; i < s.size(); i++) {
        std::string str;

        if (s[i] == 'A') {
            int num = i;
            while(s[num] != 'Z') {
                str += s[num];
                num++;
            }
            max = str.size();
        }

        if (max < str.size()) {
            max = str.size();
        }
    }

    std::cout << max + 1 << std::endl;
    return 0;
}
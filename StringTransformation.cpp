#include <bits/stdc++.h> 
 
#define INF (1<<31)//INT_MAX/2
#define MOD 1000000007
 
using ll  = long long;
using ull = unsigned long long;
 
int main(int argc, char *argv[])
{
    std::string S, T;
    std::cin >> S >> T;

    std::vector<int> s(26, -1);
    std::vector<int> t(26, -1);

    bool flag = true;
    for (int i = 0; i < S.size(); i++) {
        int s_char = S[i] - 'a';
        int t_char = T[i] - 'a';
        
        if (s[s_char] != -1 && s[s_char] != t_char) {
            flag = false;
            break;
        }

        s[s_char] = t_char;
        if (t[t_char] != -1 && t[t_char] != s_char) {
            flag = false;
            break;
        }

        t[t_char] = s_char;
    }

    if (flag) {
        std::cout << "Yes" << std::endl;
    } else {
        std::cout << "No"  << std::endl;
    }
    
    return 0;
}
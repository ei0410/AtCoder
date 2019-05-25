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
    S.erase(S.size()-1);

    int ans = 0;
    for (int i = S.size(); i > 0; i--) {
        S.erase(i);
        if (S.size() % 2 == 0) {
            std::string str1, str2;
            str1 = S.substr(0, S.size()/2);
            str2 = S.substr(S.size()/2, S.size()/2);
            if (str1 == str2) {
                ans = S.size();
                break;
            }
        }
        if(S.empty()) {
            break;
        }
    }

    std::cout << ans << std::endl;
    return 0;
}
#include <bits/stdc++.h> 
 
#define INF (1<<31)//INT_MAX/2
#define MOD 1000000007
 
using ll  = long long;
using ull = unsigned long long;
 
int main(int argc, char *argv[])
{
    std::string S;
    std::cin >> S;

    int ans = 0;
    for (int i = 0; i < 4; i++) {
        if (S[i] == '+') {
            ans++;
        } else {
            ans--;
        }
    }

    std::cout << ans << std::endl;
    return 0;
}
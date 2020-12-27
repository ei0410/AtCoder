#include <bits/stdc++.h> 
 
#define INF (1<<31) - 1 //INT_MAX/2
#define MOD 1000000007
#define PI  acos(-1)
 
using ll  = long long;
using ull = unsigned long long;
 
int main(int argc, char *argv[])
{
    int s;
    std::cin >> s;

    std::vector<int> memo;
    memo.push_back(s);
    bool flag = true;
    int ans = 0;

    while(flag) {
        if (s % 2 == 0) {
            s /= 2;
        } else {
            s = 3*s + 1;
        }

        for (int i = 0; i < memo.size(); i++) {
            if (memo[i] == s) {
                flag = false;
                ans = memo.size() + 1;
                break;
            }
        }
        memo.push_back(s);
    }

    std::cout << ans << std::endl;
    return 0;
}
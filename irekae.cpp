#include <bits/stdc++.h> 
 
#define INF INT_MAX
#define MOD 1000000007
#define PI  acos(-1)
 
using ll  = long long;
using ull = unsigned long long;
using P = std::pair<int, int>;
 
int main(int argc, char *argv[])
{
    int N;
    std::cin >> N;

    N %= 30;

    std::string ans = "123456";
    std::string tmp = ans.substr(0, N/5);
    ans.erase(0, N/5);
    ans += tmp;

    if (N%5 != 0) {
        for (int i = 0; i < N%5; i++) {
            char tmp2 = ans[i];
            ans[i] = ans[i+1];
            ans[i+1] = tmp2;
        }
    }

    std::cout << ans << std::endl;
    return 0;
}

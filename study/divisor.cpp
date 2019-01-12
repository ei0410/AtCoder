#include <bits/stdc++.h> 
 
#define INF (1<<31) - 1 //INT_MAX/2
#define MOD 1000000007
#define PI  acos(-1)
 
using ll  = long long;
using ull = unsigned long long;

std::vector<int> enum_div(int n)
{
    std::vector<int> ret;
    for (int i = 1; i*i <= n; i++) {
        if (n % i == 0) {
            ret.push_back(i);
            ret.push_back(n/i);
        }
    }

    std::sort(ret.begin(), ret.end());
    return ret;
}
 
int main(int argc, char *argv[])
{
    int N = 10;
    std::vector<int> ans = enum_div(N);

    for (int i = 0; i < ans.size(); i++) {
        std::cout << ans[i] << std::endl;
    }
    return 0;
}
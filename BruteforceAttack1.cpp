#include <bits/stdc++.h> 
 
#define INF (1<<31) - 1 //INT_MAX/2
#define MOD 1000000007
#define PI  acos(-1)
 
using ll  = long long;
using ull = unsigned long long;
 
int main(int argc, char *argv[])
{
    int N;
    std::cin >> N;

    int bit[8] = {0};
    int num = std::pow(3, N);
    std::vector<std::string> ans;
    for (int i = 0; i < num; i++) {
        int x = i;
        for (int j = 0; j < N; j++) {
            bit[j] = x % 3;
            x /= 3;
        }
        
        std::string temp;
        for (int j = 0; j < N; j++) {
            if (bit[j] == 0) {
                temp += "a";
            } else if (bit[j] == 1) {
                temp += "b";
            } else if (bit[j] == 2) {
                temp += "c";
            }
        }
        ans.push_back(temp);
    }

    std::sort(ans.begin(), ans.end());

    for (int i = 0; i < num; i++) {
        std::cout << ans[i] << std::endl;
    }
    return 0;
}
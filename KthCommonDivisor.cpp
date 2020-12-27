#include <bits/stdc++.h> 
 
#define INF INT_MAX
#define MOD 1000000007
#define PI  acos(-1)
 
using ll  = long long;
using ull = unsigned long long;
using P = std::pair<int, int>;

int main(int argc, char *argv[])
{
    int A, B, K;
    std::cin >> A >> B >> K;

    std::vector<int> ans;

    for (int i = 1; i <= 100; i++) {
        if (A % i == 0 && B % i == 0) {
            ans.push_back(i);
        }
    }

    std::cout << ans[ans.size() - K + 1] << std::endl;
    return 0;
}

#include <bits/stdc++.h> 
 
#define INF INT_MAX
#define MOD 1000000007
#define PI  acos(-1)
 
using ll  = long long;
using ull = unsigned long long;
using P = std::pair<int, int>;
 
int main(int argc, char *argv[])
{
    int m;
    std::cin >> m;

    std::string ans;
    if (m < 100) {
        ans = "00";
    } else if (m >= 100 && m <= 5000) {
        if (m < 1000) {
            ans = "0" + std::to_string(m / 100);
        } else {
            ans = std::to_string(m / 100);
        }
    } else if (m >= 6000 && m <= 30000) {
        ans = std::to_string(m/1000 + 50);
    } else if (m >= 35000 && m <= 70000) {
        ans = std::to_string((m/1000 - 30) / 5 + 80);
    } else {
        ans = "89";
    }

    std::cout << ans << std::endl;
    return 0;
}

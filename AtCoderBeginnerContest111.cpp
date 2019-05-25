#include <bits/stdc++.h> 
 
#define INF INT_MAX
#define MOD 1000000007
#define PI  acos(-1)
 
using ll  = long long;
using ull = unsigned long long;
using Pii = std::pair<int, int>;
 
int main(int argc, char *argv[])
{
    /*
    int N;
    std::cin >> N;

    int ans = 0;
    for (int i = 111; i < 1000; i += 111) {
        if (N <= i) {
            ans = i;
            break;
        }
    }    

    std::cout << ans << std::endl;
    */

    std::string N;
    std::cin >> N;

    std::string ans = "000";
    for (int i = 1; i < 10; i++) {
        std::string tmp = std::to_string(i*100+i*10+i);
        if (N <= tmp) {
            ans = tmp;
            break;
        }
    }

    std::cout << ans << std::endl;
    return 0;
}

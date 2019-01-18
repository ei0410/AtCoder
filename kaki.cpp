#include <bits/stdc++.h> 
 
#define INF (1<<31) - 1 //INT_MAX/2
#define MOD 1000000007
#define PI  acos(-1)
 
using ll  = long long;
using ull = unsigned long long;
 
int main(int argc, char *argv[])
{
    std::vector<std::string> S(12);
    for (int i = 0; i < 12; i++) {
        std::cin >> S[i];
    }

    int count = 0;
    for (int i = 0; i < 12; i++) {
        for (int j = 0; j < S[i].size(); j++) {
            if (S[i][j] == 'r') {
                count++;
                break;
            }
        }
    }

    std::cout << count << std::endl;
    return 0;
}
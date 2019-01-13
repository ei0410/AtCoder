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

    std::vector<int> vec;
    int n = S.size();
    for (int bit = 0; bit < (1 << n); bit++) {
        std::vector<ll> vec;
        for (int i = 0; i < n; i++) {
            if (bit & (1 << i)) {
                vec.push_back(i);
            }
        }

        std::cout << bit;
        for (int i = 0; i < vec.size(); i++) {
            std::cout << vec[i] << " ";
        }
    }

    return 0;
}
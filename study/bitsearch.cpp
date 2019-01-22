#include <bits/stdc++.h> 
 
#define INF (1<<31) - 1 //INT_MAX/2
#define MOD 1000000007
#define PI  acos(-1)
 
using ll  = long long;
using ull = unsigned long long;
 
int main(int argc, char *argv[])
{
    int n = 5;

    for (int bit = 0; bit < (1<<n); bit++) {
        for (int i = 0; i < n; i++) {
            if (bit & (1<<i)) {
                std::cout << bit << " " << i << std::endl;
            }
        }
    }
    return 0;
}
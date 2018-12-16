#include <bits/stdc++.h> 
 
#define INF (1<<31)//INT_MAX/2
#define MOD 1000000007
 
using ll  = long long;
using ull = unsigned long long;
 
int main(int argc, char *argv[])
{
    int K, S;
    std::cin >> K >> S;

    int count = 0;
    for (int x = 0; x <= K; x++) {
        for (int y = 0; y <= K; y++) {
            int z = S - x - y;
            if ((0 <= z) && (z <= K)) {
                count++;
            }
        }
    }

    std::cout << count << std::endl;
    return 0;
}
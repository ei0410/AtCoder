#include <bits/stdc++.h> 
 
#define INF (1<<31)//INT_MAX/2
#define MOD 1000000007
 
using ll  = long long;
using ull = unsigned long long;
 
int main(int argc, char *argv[])
{
    int N;
    std::cin >> N;

    int max = 0;
    int ans = 0;
    if (N == 1) {
        std::cout << 1 << std::endl;
    } else {
        for (int i = 1; i <= N; i++) {
            int temp = i;
            int count = 0;
            while (temp % 2 == 0) {
                temp /= 2;
                count++;
            }
            if (max < count) {
                max = count;
                ans = i;
            }
        }

        std::cout << ans << std::endl;
    }

    return 0;
}
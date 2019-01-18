#include <bits/stdc++.h> 
 
#define INF (1<<31) - 1 //INT_MAX/2
#define MOD 1000000007
#define PI  acos(-1)
 
using ll  = long long;
using ull = unsigned long long;
 
int main(int argc, char *argv[])
{
    /* 20points
    int N;
    std::cin >> N;

    int count = 0;
    for (int i = 1; i <= N; i++) {
        int num = i;
        while (num > 0) {
            if (num % 10 == 1) {
                count++;
            }
            num /= 10;
        }
    }

    std::cout << count << std::endl;
    */

    int N;
    std::cin >> N;

    int count = 0;
    int digit = 0;
    int max_digit = 0;

    int temp = N;
    while (temp > 0) {
        max_digit = temp % 10;
        temp /= 10;
        digit++;
    }

    std::cout << count << std::endl;
    std::cout << digit << std::endl;
    std::cout << max_digit << std::endl;
    return 0;
}
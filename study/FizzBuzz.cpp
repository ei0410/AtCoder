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

    for (int i = 1; i <= N; i++) {
        if (N % 15 == 0) {
            std::cout << "FizzBuzz" << std::endl;
        } else if (N % 3 == 0) {
            std::cout << "Fizz" << std::endl;
        } else if (N % 5 == 0) {
            std::cout << "Buzz" << std::endl;
        } else {
            std::cout << i << std::endl;
        }
    }
    return 0;
}
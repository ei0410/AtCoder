#include <bits/stdc++.h> 
 
#define INF (1<<31)//INT_MAX/2
#define MOD 1000000007
 
using ll  = long long;
using ull = unsigned long long;

int DiditSums(int N) {
    int temp = 0;
    while (N > 0) {
        temp += N % 10;
        N /= 10;
    }

    return temp;
}
 
int main(int argc, char *argv[])
{
    int N;
    std::cin >> N;

    if (N % DiditSums(N) == 0) {
        std::cout << "Yes" << std::endl;
    } else {
        std::cout << "No"  << std::endl;
    }
    return 0;
}
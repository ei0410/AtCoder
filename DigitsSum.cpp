#include <bits/stdc++.h> 
 
#define INF (1<<31)//INT_MAX/2
#define MOD 1000000007
 
using ll  = long long;
using ull = unsigned long long;

int get_digit(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }

    return sum;
}

int main(int argc, char *argv[])
{
    int N;
    std::cin >> N;
    
    int min = 100000000;
    for (int i = 1; i < N; i++) {
        int A = i;
        int B = N - i;
        int sumA = get_digit(A);
        int sumB = get_digit(B);

        int sum = sumA + sumB;
        if (sum < min) {
            min = sum;
        }
    }

    std::cout << min << std::endl;
    return 0;
}
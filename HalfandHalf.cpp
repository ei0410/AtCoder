#include <bits/stdc++.h> 
 
#define INF (1<<31) - 1 //INT_MAX/2
#define MOD 1000000007
#define PI  acos(-1)
 
using ll  = long long;
using ull = unsigned long long;

int main(int argc, char *argv[])
{
    int A, B, C, X, Y;
    std::cin >> A >> B >> C >> X >> Y;

    int max = std::max(X, Y);
    int min = INF;
    for (int i = 0; i <= max; i++) {
        int sum = i*2*C + std::max(0, X - i) * A + std::max(0, Y - i) * B;
        if (min > sum) {
            min = sum;
        }
    }

    std::cout << min << std::endl;
    return 0;
}
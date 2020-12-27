#include <bits/stdc++.h> 
 
#define INF (1<<31) - 1 //INT_MAX/2
#define MOD 1000000007
#define PI  acos(-1)
 
using ll  = long long;
using ull = unsigned long long;

int main(int argc, char *argv[])
{
    int A, B, C;
    std::cin >> A >> B >> C;

    int K;
    std::cin >> K;

    int max = 0;

    std::vector<bool> flag(3, false);
    if (A <= B) {
        if (B <= C) {
            max = C;
            flag[2] = true;
        } else {
            max = B;
            flag[1] = true;
        }
    } else {
        if (A <= C) {
            max = C;
            flag[2] = true;
        } else {
            max = A;
            flag[0] = true;
        }
    }

    for (int i = 0; i < K; i++) {
        max *= 2;
    }

    if (flag[0]) {
        std::cout << max + B + C << std::endl;
    } else if (flag[1]) {
        std::cout << A + max + C << std::endl;
    } else if (flag[2]) {
        std::cout << A + B + max << std::endl;
    }

    return 0;
}
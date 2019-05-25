#include <bits/stdc++.h> 
 
#define INF (1<<31) - 1 //INT_MAX/2
#define MOD 1000000007
#define PI  acos(-1)

using ll  = long long;
using ull = unsigned long long;
using P = std::pair<int, int>;

int GCD(int a, int b) {
    if (a <= 0 || b <= 0) {
        return -1;
    }
    if (a > b) {
        if (a % b == 0) {
            return b;
        } else {
            GCD(b, a % b);
        }
    } else if (a < b) {
        if (b % a == 0) {
            return a;
        } else {
            GCD(a, b % a);
        }
    } else {
        return a;
    }
}

int main(int argc, char *argv[])
{
    int W, H;
    std::cin >> W >> H;

    int temp = GCD(W, H);
    if (W/temp == 4) {
        std::cout << "4:3"  << std::endl;
    } else {
        std::cout << "16:9" << std::endl;
    }
    
    return 0;
}
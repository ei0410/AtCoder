#include <bits/stdc++.h> 
 
#define INF (1<<31)//INT_MAX/2
#define MOD 1000000007
#define PI  acos(-1)
 
using ll  = long long;
using ull = unsigned long long;

int Euc(int a, int b) {
    if (a <= 0 || b <= 0) {
        return -1;
    }
    if (a > b) {
        if (a % b == 0) {
            return b;
        } else {
            Euc(b, a % b);
        }
    } else if (a < b) {
        if (b % a == 0) {
            return a;
        } else {
            Euc(a, b % a);
        }
    } else {
        return a;
    }
}
 
int main(int argc, char *argv[])
{
    int a = 1071;
    int b = 1029;
    std::cout << Euc(a, b) << std::endl;
    return 0;
}
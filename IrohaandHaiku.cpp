#include <bits/stdc++.h> 
 
#define INF (1<<31)//INT_MAX/2
#define MOD 1000000007
 
using ll  = long long;
using ull = unsigned long long;
 
int main(int argc, char *argv[])
{
    int A, B, C;
    std::cin >> A >> B >> C;

    bool flag = false;
    if (A == 5 && B == 5 && C == 7) {
        flag = true;
    } else if (A == 5 && B == 7 && C == 5) {
        flag = true;
    } else if (A == 7 && B == 5 && C == 5) {
        flag = true;
    }

    if (flag) {
        std::cout << "YES" << std::endl;
    } else {
        std::cout << "NO"  << std::endl;
    }
    return 0;
}
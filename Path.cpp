#include <bits/stdc++.h> 
 
#define INF INT_MAX
#define MOD 1000000007
#define PI  acos(-1)
 
using ll  = long long;
using ull = unsigned long long;
using P = std::pair<int, int>;
 
int main(int argc, char *argv[])
{
    int a[6];
    for (int i = 0; i < 6; i++) {
        std::cin >> a[i];
    }

    int A = 0;
    int B = 0;
    int C = 0;
    int D = 0;

    for (int i = 0; i < 6; i++) {
        if (a[i] == 1) {
            A++;
        }
        if (a[i] == 2) {
            B++;
        }
        if (a[i] == 3) {
            C++;
        }
        if (a[i] == 4) {
            D++;
        }
    }

    if (A == 2 && B == 2 && C == 1 && D == 1) {
        std::cout << "YES" << std::endl;
    } else if (A == 2 && B == 1 && C == 2 && D == 1) {
        std::cout << "YES" << std::endl;
    } else if (A == 2 && B == 1 && C == 1 && D == 2) {
        std::cout << "YES" << std::endl;
    } else if (A == 1 && B == 2 && C == 2 && D == 1) {
        std::cout << "YES" << std::endl;
    } else if (A == 1 && B == 2 && C == 1 && D == 2) {
        std::cout << "YES" << std::endl;
    } else if (A == 1 && B == 1 && C == 2 && D == 2) {
        std::cout << "YES" << std::endl;
    } else {
        std::cout << "NO"  << std::endl;
    }
    return 0;
}
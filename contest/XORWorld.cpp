#include <bits/stdc++.h> 
 
#define INF INT_MAX
#define MOD 1000000007
#define PI  acos(-1)
 
using ll  = long long;
using ull = unsigned long long;
using Pii = std::pair<int, int>;

int main(int argc, char *argv[])
{
    ll A, B;
    std::cin >> A >> B;

    ll digita = 0;
    ll digitb = 0;
    ll tmpa = A-1;
    ll tmpb = B;
    while (tmpa > 0) {
        digita++;
        tmpa /= 2;
    }
    while (tmpb > 0) {
        digitb++;
        tmpb /= 2;
    }

    ll ansa = 0;
    ll ketaa[digita];
    for (ll i = 1; i <= digita; i++) {
        if (digita % 2) {

        } else {

        }
        std::pow(2, i);
    }
    //std::cout << bit_digit(B) - bit_digit(A-1) << std::endl;
    return 0;
}
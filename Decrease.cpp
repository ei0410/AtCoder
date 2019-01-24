#include <bits/stdc++.h> 
 
#define INF (1<<31) - 1 //INT_MAX/2
#define MOD 1000000007
#define PI  acos(-1)
 
using ll  = long long;
using ull = unsigned long long;

int main(int argc, char *argv[])
{
    ll K;
    std::cin >> K;

    std::vector<ll> a(50);

    for (int i = 0; i < 50; i++) {
        a[i] = i;
    }

    ll rema = K % 50;
    ll divi = K / 50;

    for (int i = 0; i < 50; i++) {
        if (rema == 0) {
            a[i] = a[i] + K;
        } else {
            if (rema > i) {
                a[i] = a[i] + 50 * (divi+1);
            } else {
                a[i] = a[i] + 50 * divi;
            }
        }
    }

    std::cout << 50 << std::endl;
    for (int i = 0; i < 50; i++) {
        std::cout << a[i] << " ";
    }
    std::cout << std::endl;
    return 0;
}
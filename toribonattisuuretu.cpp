#include <bits/stdc++.h> 
 
#define INF INT_MAX
#define MOD 1000000007
#define PI  acos(-1)
 
using ll  = long long;
using ull = unsigned long long;
using P = std::pair<int, int>;
 
int main(int argc, char *argv[])
{
    ll N;
    std::cin >> N;

    std::vector<ll> a(1000010);
    a[0] = 0;
    a[1] = 0;
    a[2] = 1;
    for (int i = 3; i < 1000010; i++) {
        a[i] = (a[i-1] + a[i-2] + a[i-3]) % 10007;
    }

    std::cout << a[N-1] << std::endl;
    return 0;
}

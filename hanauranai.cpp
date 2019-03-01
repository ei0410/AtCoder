#include <bits/stdc++.h> 
 
#define INF INT_MAX
#define MOD 1000000007
#define PI  acos(-1)
 
using ll  = long long;
using ull = unsigned long long;
using P = std::pair<int, int>;
 
int main(int argc, char *argv[])
{
    int n;
    std::cin >> n;

    std::vector<int> a(n);
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] == 2 || a[i] == 4 || a[i] == 8) {
            sum++;
        } else if (a[i] == 5) {
            sum += 2;
        } else if (a[i] == 6) {
            sum += 3;
        }
    }

    std::cout << sum << std::endl;
    return 0;
}

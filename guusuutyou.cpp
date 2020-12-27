#include <bits/stdc++.h> 
 
#define INF (1<<31) - 1 //INT_MAX/2
#define MOD 1000000007
#define PI  acos(-1)

using ll  = long long;
using ull = unsigned long long;
using P = std::pair<int, int>;

int main(int argc, char *argv[])
{
    int n;
    std::cin >> n;

    std::vector<int> v(n);
    for (int i = 0; i < n; i++) {
        std::cin >> v[i];
    }

    std::map<int, int> m1;
    for (int i = 0; i < n; i+=2) {
        m1[v[i]]++;
    }

    std::map<int, int> m2;
    for (int i = 1; i < n; i+=2) {
        m2[v[i]]++;
    }

    int m1max = 0;
    int m1no_2 = 0;
    int memo1 = 0;
    for (std::map<int, int>::iterator it = m1.begin(), end = m1.end(); it != end; it++) {
        if (m1max < it->second) {
            m1max = it->second;
            memo1 = it->first;
        } else if (m1no_2 < it->second) {
            m1no_2 = it->second;
        }
    }

    int m2max = 0;
    int m2no_2 = 0;
    int memo2 = 0;
    for (std::map<int, int>::iterator it = m2.begin(), end = m2.end(); it != end; it++) {
        if (m2max < it->second) {
            m2max = it->second;
            memo2 = it->first;
        } else if (m2no_2 < it->second) {
            m2no_2 = it->second;
        }
    }

    if (memo1 != memo2) {
        std::cout << n - (m1max+m2max) << std::endl;
    } else {
        std::cout << std::min(n - (m1max+m2no_2), n - (m2max+m1no_2)) << std::endl;
    }
    return 0;
}
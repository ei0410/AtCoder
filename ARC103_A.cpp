#include <bits/stdc++.h> 
 
#define INF INT_MAX
#define MOD 1000000007
#define PI  acos(-1)
 
using ll  = long long;
using ull = unsigned long long;
using Pii = std::pair<int, int>;
 
int main(int argc, char *argv[])
{
    int n;
    std::cin >> n;
    
    std::vector<int> v(n);
    for (int i = 0; i < n; i++) {
        std::cin >> v[i];
    }

    std::map<int, int> m1, m2;
    for (int i = 0; i < n; i+=2) {
        m1[v[i]]++;
    }
    for (int i = 1; i < n; i+=2) {
        m2[v[i]]++;
    }

    int m1max = 0;
    int m1no2 = 0;
    int memo1 = 0;
    for (std::map<int, int>::iterator it = m1.begin(), end = m1.end(); it != end; it++) {
        if (m1max < it->second) {
            m1max = it->second;
            memo1 = it->first;
        }
    }
    
    m1.erase(memo1);
    for (std::map<int, int>::iterator it = m1.begin(), end = m1.end(); it != end; it++) {
        if (m1no2 < it->second) {
            m1no2 = it->second;
        }
    }
    
    int m2max = 0;
    int m2no2 = 0;
    int memo2 = 0;
    for (std::map<int, int>::iterator it = m2.begin(), end = m2.end(); it != end; it++) {
        if (m2max < it->second) {
            m2max = it->second;
            memo2 = it->first;
        }
    }
    
    m2.erase(memo2);
    for (std::map<int, int>::iterator it = m2.begin(), end = m2.end(); it != end; it++) {
        if (m2no2 < it->second) {
            m2no2 = it->second;
        }
    }

    if (memo1 != memo2) {
        std::cout << n - (m1max+m2max) << std::endl;
    } else {
        std::cout << std::min(n - (m1max+m2no2), n - (m2max+m1no2)) << std::endl;
    }
    return 0;
}

#include <bits/stdc++.h> 
 
#define INF INT_MAX
#define MOD 1000000007
#define PI  acos(-1)
 
using ll  = long long;
using ull = unsigned long long;
using Pii = std::pair<int, int>;
 
int main(int argc, char *argv[])
{
    std::vector<int> a = {1, 3, 2};
    std::vector<int> b = {5, 4, 6};
    std::vector<Pii> p;
    for (int i = 0; i < a.size(); i++) {
        p.push_back(std::make_pair(a[i], b[i]));
        // p.emplace_back(a[i], b[i]);
    }

    for (int i = 0; i < p.size(); i++) {
        std::cout << p[i].first << ":" << p[i].second << std::endl;
    }

    std::sort(p.begin(), p.end());
    // std::sort(p.rbegin(), p.rend());
    for (int i = 0; i < p.size(); i++) {
        std::cout << p[i].first << ":" << p[i].second << std::endl;
    }

    for (int i = 0; i < p.size(); i++) {
        int tmp = p[i].first;
        p[i].first  = p[i].second;
        p[i].second = tmp;
    }

    for (int i = 0; i < p.size(); i++) {
        std::cout << p[i].first << ":" << p[i].second << std::endl;
    }

    std::sort(p.begin(), p.end());
    // std::sort(p.rbegin(), p.rend());
    for (int i = 0; i < p.size(); i++) {
        std::cout << p[i].first << ":" << p[i].second << std::endl;
    }
    return 0;
}
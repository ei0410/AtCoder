#include <bits/stdc++.h> 
 
#define INF (1<<31) - 1 //INT_MAX/2
#define MOD 1000000007
#define PI  acos(-1)

using ll  = long long;
using ull = unsigned long long;
using P = std::pair<int, int>;

int main(int argc, char *argv[])
{
    int N;
    std::cin >> N;

    std::vector<int> a(N);
    for (int i = 0; i < N; i++) {
        std::cin >> a[i];
    }

    std::set<int> s;
    for (int i = 0; i < N; i++) {
        s.insert(a[i]);
    }

    std::vector<int> type;
    for (auto itr = s.begin(); itr != s.end(); itr++) {
        type.push_back(*itr);
    }

    std::sort(type.begin(), type.end());

    std::vector<P> p(N);
    for (int i = 0; i < type.size(); i++) {
        p[i].first  = i;
        p[i].second = type[i];
    }

    std::vector<int> ans;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < type.size(); j++) {
            if (a[i] == p[j].second) {
                ans.push_back(p[j].first);
            }
        }
    }

    for (int i = 0; i < ans.size(); i++) {
        std::cout << ans[i] << std::endl;
    }
    return 0;
}
#include <bits/stdc++.h> 
 
#define INF (1<<31) - 1 //INT_MAX/2
#define MOD 1000000007
#define PI  acos(-1)
 
using ll  = long long;
using ull = unsigned long long;

int main(int argc, char *argv[])
{
    int N;
    std::cin >> N;

    std::vector<std::string> s(N);
    for (int i = 0; i < N; i++) {
        std::cin >> s[i];
    }

    int M;
    std::cin >> M;

    std::vector<std::string> t(M);
    for (int i = 0; i < M; i++) {
        std::cin >> t[i];
    }

    std::map<std::string, int> m;
    for (int i = 0; i < N; i++) {
        m[s[i]]++;
    }
    for (int i = 0; i < M; i++) {
        m[t[i]]--;
    }

    int max = -1000;
    for (std::map<std::string, int>::iterator it = m.begin(), end = m.end(); it != end; it++) {
        if (max < it->second) {
            max = it->second;
        }
    }

    if (max < 0) {
        max = 0;
    }
    std::cout << max << std::endl;
    return 0;
}
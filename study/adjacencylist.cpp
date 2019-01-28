#include <bits/stdc++.h> 
 
#define INF (1<<31) - 1 //INT_MAX/2
#define MOD 1000000007
#define PI  acos(-1)
 
using ll  = long long;
using ull = unsigned long long;

#define MAX_V 50

struct edge {
    int to;
    int cost;
};
std::vector<int> G[MAX_V];
 
int main(int argc, char *argv[])
{
    int V, E;
    std::cin >> V >> E;

    for (int i = 0; i < E; i++) {
        int s, t;
        std::cin >> s >> t;
        G[s].push_back(t);
        G[t].push_back(s);
    }

    return 0;
}
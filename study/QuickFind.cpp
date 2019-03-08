#include <bits/stdc++.h> 
 
#define INF INT_MAX
#define MOD 1000000007
#define PI  acos(-1)
 
using ll  = long long;
using ull = unsigned long long;
using Pii = std::pair<int, int>;

std::vector<int> i2g;
std::vector<std::vector<int>> g2i;

void init(int n) {
    i2g.resize(n);
    g2i.resize(n);
    for (int i = 0; i < n; i++) {
        i2g[i] = i;
        g2i[i].assign(1, i);
    }
}

void merge(int ia, int ib) {
    int ga = i2g[ia];
    int gb = i2g[ib];

    for (int j:g2i[gb]) {
        i2g[j] = ga;
    }

    g2i[ga].insert(g2i[ga].end(), g2i[gb].begin(), g2i[gb].end());
    g2i[gb].clear();
}

bool is_same_group(int ia, int ib) {
    return i2g[ia] == i2g[ib];
}
 
int main(int argc, char *argv[])
{
    return 0;
}

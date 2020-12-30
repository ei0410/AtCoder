#include <bits/stdc++.h> 
 
using namespace std;

#define YES cout << "YES" << endl;
#define NO  cout << "NO"  << endl;
#define Yes cout << "Yes" << endl;
#define No  cout << "No"  << endl;
 
#define INF INT_MAX
#define MOD 1000000007
#define PI  acos(-1)

using ll  = long long;
using ull = unsigned long long;
using Pii = pair<int, int>;
using Pll = pair<ll, ll>;

#define rep(i, n) for (ll i = 0; i < n; i++)
#define rrep(i, n) for (ll i = (n)-1; i >= 0; i--)

vector<ll> i2g;
vector<vector<ll>> g2i;

void init(ll n) {
    i2g.resize(n);
    g2i.resize(n);
    rep (i, n) {
        i2g[i] = i;
        g2i[i].assign(1, i);
    }
}

void merge(ll ia, ll ib) {
    if (g2i[i2g[ia]].size() < g2i[i2g[ib]].size()) {
        swap(ia, ib);
    }

    ll ga = i2g[ia];
    ll gb = i2g[ib];

    for (ll j:g2i[gb]) {
        i2g[j] = ga;
    }

    g2i[ga].insert(g2i[ga].end(), g2i[gb].begin(), g2i[gb].end());
    g2i[gb].clear();
}

/*
void merge_set(set<int> *&a, set<int> *&b) {
    if (a->size() < b->size()) {
        swap(a, b);
    }

    a->insert(b->begin(), b->end());
    b->clear();
}
*/

bool is_same_group(ll ia, ll ib) {
    return i2g[ia] == i2g[ib];
}
 
int main(void)
{
    return 0;
}

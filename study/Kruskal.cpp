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

#define rep(i, n) for (ll i = 0; i < (n); i++)
#define rrep(i, n) for (ll i = (n)-1; i >= 0; i--)

struct UF {
    vector<ll> par;
    vector<ll> rank;

    UF (ll N) : par(N), rank(N) {
        rep (i, N) {
            par[i] = i;
            rank[i] = 0;
        }
    }

    void init(ll N) {
        par.resize(N);
        rank.resize(N);

        rep (i, N) {
            par[i] = i;
            rank[i] = 0;
        }
    }

    ll root(ll x) {
        if (par[x] == x) {
            return x;
        } else {
            return par[x] = root(par[x]);
        }
    }

    bool unite(ll x, ll y) {
        x = root(x);
        y = root(y);
        if (x == y) {
            return false;
        }

        if (rank[x] < rank[y]) {
            par[x] = y;
        } else {
            par[y] = x;
            if (rank[x] == rank[y]) {
                rank[x]++;
            }
        }
        return true;
    }

    bool same(ll x, ll y) {
        return root(x) == root(y);
    }
};

struct Edge {
    ll u;
    ll v;
    ll cost;
};

bool comp (const Edge &e1, const Edge &e2) {
    return e1.cost < e2.cost;
}

ll Kruskal (ll V, vector<Edge>& edges) {
    UF uf(V);
    ll sum = 0;

    sort(edges.begin(), edges.end(), comp);
    for (auto e : edges) {
        if (!uf.same(e.u, e.v)) {
            uf.unite(e.u, e.v);
            sum += e.cost;
        }
    }
    return sum;
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    ll V, E;
    cin >> V >> E;

    vector<Edge> edges(E);
    rep (i, E) {
        ll s, t, w;
        cin >> s >> t >> w;
        Edge e = {s, t, w};
        edges[i] = e;
    }

    cout << Kruskal(V, edges) << endl;
    return 0;
}
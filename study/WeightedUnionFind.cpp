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
    vector<ll> siz;
    vector<ll> rank;

    UF(ll N) : par(N), siz(N, 1LL), rank(N) {
        rep (i, N) {
            par[i] = i;
            rank[i] = 0;
        }
    }

    void init(ll N) {
        par.resize(N);
        siz.assign(N, 1LL);
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

    bool unite(ll x, ll y, ll z) {
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
                rank[x] += z;
            }
        }
        return true;
    }

    bool same(ll x, ll y) {
        return root(x) == root(y);
    }

    ll size(ll x) {
        return siz[root(x)];
    }

    ll diff(ll x, ll y) {
        return rank[y]-rank[x];
    }
};


int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    ll n, q;
    cin >> n >> q;

    UF uf(n);

    rep (i, q) {
        ll f, x, y, z;
        cin >> f;
        if (f) {
            cin >> x >> y;
            if (uf.same(x, y)) {
                cout << uf.diff(x, y) << endl;
            } else {
                cout << '?' << endl;
            }
        } else {
            cin >> x >> y >> z;
            uf.unite(x, y, z);
        }
    }
    return 0;
}
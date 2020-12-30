#include <bits/stdc++.h> 

using namespace std;

#define YES cout << "YES" << endl;
#define NO  cout << "NO"  << endl;
#define Yes cout << "Yes" << endl;
#define No  cout << "No"  << endl;
 
#define INF INT_MAX
#define LLINF LLONG_MAX
#define MOD 1000000007
#define PI  acos(-1)

using ll  = long long;
using ull = unsigned long long;
using Pii = pair<int, int>;
using Pll = pair<ll, ll>;

#define rep(i, n) for (ll i = 0; i < n; i++)
#define rrep(i, n) for (ll i = (n)-1; i >= 0; i--)

template<class T> inline bool chmin(T& a, T b) {
    if (a > b) {
        a = b;
        return true;
    }
    return false;
}

template<class T> inline bool chmax(T& a, T b) {
    if (a < b) {
        a = b;
        return true;
    }
    return false;
}

struct UF {
    vector<ll> par;
    vector<ll> siz;

    UF(ll N) : par(N), siz(N, 1LL) {
        rep (i, N) {
            par[i] = i;
        }
    }

    void init(ll N) {
        par.resize(N);
        siz.assign(N, 1LL);
        rep (i, N) {
            par[i] = i;
        }
    }

    ll root(ll x) {
        if (par[x] == x) {
            return x;
        }
        return par[x] = root(par[x]);
    }

    bool unite(ll x, ll y) {
        x = root(x);
        y = root(y);
        if (x == y) {
            return false;
        }
        if (siz[x] < siz[y]) {
            swap(x, y);
        }
        siz[x] += siz[y];
        par[y] = x;
        return true;
    }

    bool same(ll x, ll y) {
        return root(x) == root(y);
    }

    ll size(ll x) {
        return siz[root(x)];
    }
};

int main(void)
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    ll N;
    cin >> N;

    UF uf(N);
    rep (i, N) {
        ll A;
        cin >> A;
        A--;
        uf.unite(i, A);
    }

    rep (i, N) {
        if (uf.size(i)%2) {
            cout << -1 << endl;
            return 0;
        }
    }

    cout << N/2 << endl;
    return 0;
}
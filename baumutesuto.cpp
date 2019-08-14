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

int main(int argc, char *argv[])
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    ll N, M;
    cin >> N >> M;

    UF uf(N);

    vector<ll> A(M), B(M);
    vector<ll> memo(N, 0);
    rep (i, M) {
        cin >> A[i] >> B[i];
        A[i]--;
        B[i]--;
        if (uf.same(A[i], B[i])) {
            memo[uf.root(A[i])] = -1;
        }
        uf.unite(A[i], B[i]);
    }

    rep (i, N) {
        if (memo[uf.root(i)] >= 0) {
            memo[uf.root(i)]++;
        }
    }

    ll ans = 0;
    rep (i, N) {
        if (memo[i] > 0) {
            ans++;
        }
    }

    cout << ans << endl;
    return 0;
}
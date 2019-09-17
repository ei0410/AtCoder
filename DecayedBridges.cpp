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

    vector<ll> A(M), B(M);
    rep (i, M) {
        cin >> A[i] >> B[i];
        A[i]--;
        B[i]--;
    }

    vector<ll> ans(M);
    ans[M-1] = N*(N-1)/2;

    UF uf(N);
    for (ll i = M-1; i > 0; i--) {
        if (!uf.same(A[i], B[i])) {
            ans[i-1] = ans[i] - uf.size(A[i])*uf.size(B[i]);
            uf.unite(A[i], B[i]);
        } else {
            ans[i-1] = ans[i];
        }
    }

    rep (i, M) {
        cout << ans[i] << endl;
    }
    return 0;
}
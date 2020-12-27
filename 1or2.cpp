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

#define MAX_N 100010
#define MAX_M 100010

ll N, M;
ll X[MAX_M], Y[MAX_M], Z[MAX_M], parent[MAX_N], ranked[MAX_N];

void init(ll n) {
    for (ll i = 0; i < n; i++) {
        parent[i] = i;
        ranked[i] = 0;
    }
}

ll root(ll x) {
    if (parent[x] == x) {
        return x;
    } else {
        return parent[x] = root(parent[x]);
    }
}

bool same(ll x, ll y) {
    return root(x) == root(y);
}

void unite(ll x, ll y) {
    x = root(x);
    y = root(y);

    if (x == y) {
        return;
    }

    if (ranked[x] < ranked[y]) {
        parent[x] = y;
    } else {
        parent[y] = x;
        if (ranked[x] == ranked[y]) {
            ranked[x]++;
        }
    }
}

int main(int argc, char *argv[])
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    cin >> N >> M;
    rep (i, M) {
        cin >> X[i] >> Y[i] >> Z[i];
        X[i]--;
        Y[i]--;
    }

    init(N);

    rep (i, M) {
        unite(X[i], Y[i]);
    }

    set<ll> s;
    rep (i, N) {
        s.insert(root(i));
    }

    cout << s.size() << endl;
    return 0;
}
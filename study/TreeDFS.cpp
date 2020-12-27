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

using Graph = vector<vector<ll>>;
vector<ll> depth;
vector<ll> subtree_size;

void dfs(const Graph &G, ll v, ll p, ll d) {
    depth[v] = d;
    for (auto next : G[v]) {
        if (next == p) {
            continue;
        }
        dfs(G, next, v, d+1);
    }

    subtree_size[v] = 1;
    for (auto c : G[v]) {
        if (c == p) {
            continue;
        }
        subtree_size[v] += subtree_size[c];
    }
}

int main(void)
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    ll N;
    cin >> N;

    Graph G(N);
    rep (i, N-1) {
        ll a, b;
        cin >> a >> b;
        G[a].push_back(b);
        G[b].push_back(a);
    }

    ll root = 0;
    depth.assign(N, 0);
    subtree_size.assign(N, 0);
    dfs(G, root, -1, 0);

    rep (i, N) {
        cout << i << ": depth = " << depth[i] << ", subtree_size = " << subtree_size[i] << endl;
    }
    return 0;
}
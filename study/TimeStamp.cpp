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

vector<bool> seen;
vector<ll> preorder;
vector<ll> inorder;

void dfs(const Graph &G, ll v, ll& ptr) {
    preorder[v] = ptr++;
    seen[v] = true;
    for (auto next : G[v]) {
        if (seen[next]) {
            continue;
        }
        dfs(G, next, ptr);
    }

    inorder[v] = ptr++;
}

int main(void)
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    ll N, M;
    cin >> N >> M;

    Graph G(N);
    rep (i, M) {
        ll a, b;
        cin >> a >> b;
        G[a].push_back(b);
        G[b].push_back(a);
    }

    seen.assign(N, false);
    preorder.resize(N);
    inorder.resize(N);
    ll ptr = 0;
    dfs(G, 0, ptr);

    rep (i, N) {
        cout << i << " " << preorder[i] << " " << inorder[i] << endl;
    }
    return 0;
}
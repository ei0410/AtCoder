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

vector<ll> color;
bool dfs(const Graph &G, ll v, ll cur = 0) {
    color[v] = cur;
    for (auto next : G[v]) {
        if (color[next] != -1) {
            if (color[next] == cur) {
                return false;
            }
            continue;
        }
        if (!dfs(G, next, 1-cur)) {
            return false;
        }
    }
    return true;
}

int main(int argc, char *argv[])
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

    color.assign(N, -1);
    bool flag = true;
    rep (i, N) {
        if (color[i] != -1) {
            continue;
        }
        if (!dfs(G, i)) {
            flag = false;
        }
    }

    if (flag) {
        Yes;
    } else {
        No;
    }
    return 0;
}
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

void rec(ll v, const Graph &G, vector<bool> &seen, vector<ll> &order) {
    seen[v] = true;
    for (auto next : G[v]) {
        if (seen[next]) {
            continue;
        }
        rec(next, G, seen, order);
    }
    order.push_back(v);
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
    }

    vector<bool> seen(N, 0);
    vector<ll> order;
    rep (v, N) {
        if (seen[v]) {
            continue;
        }
        rec(v, G, seen, order);
    }

    reverse(order.begin(), order.end());

    for (auto v : order) {
        cout << v << endl;
    }
    return 0;
}
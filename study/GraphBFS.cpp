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

using Graph = vector<vector<ll>>;

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

    vector<ll> dist(N, -1);
    queue<ll> que;

    dist[0] = 0;
    que.push(0);

    while (!que.empty()) {
        ll v = que.front();
        que.pop();

        for (auto next : G[v]) {
            if (dist[next] != -1) {
                continue;
            }

            dist[next] = dist[v]+1;
            que.push(next);
        }
    }

    rep (i, N) {
        cout << i << " " << dist[i] << endl;
    }
    return 0;
}
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

#define MAX_N 100010

struct edge {
    ll to;
    ll cost;
};

int main(void)
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    ll N, M;
    cin >> N >> M;

    vector<edge> G[MAX_N];
    rep (i, M) {
        ll from, to, cost;
        cin >> from >> to >> cost;
        //from--;
        //to--;
        G[from].push_back((edge){to, cost});
    }

    priority_queue<Pll, vector<Pll>, greater<Pll>> que;
    vector<ll> d(N, INF);
    d[0] = 0;
    que.push(Pll(0, 0));
    
    while (!que.empty()) {
        Pll p = que.top();
        que.pop();

        ll v = p.second;

        if (d[v] < p.first) {
            continue;
        }

        rep (next, G[v].size()) {
            edge e = G[v][next];
            if (d[e.to] > d[v] + e.cost) {
                d[e.to] = d[v] + e.cost;
                que.push(Pll(d[e.to], e.to));
            }
        }
    }

    rep (i, N) {
        cout << i << " " << d[i] << endl;
    }
    return 0;
}
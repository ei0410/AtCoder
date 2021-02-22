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

#define MAX_N 100010

struct edge {
    ll to;
    ll cost;
    ll k;
};

int main(void)
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    ll N, M, X, Y;
    cin >> N >> M >> X >> Y;
    X--;
    Y--;

    vector<edge> G[MAX_N];
    rep (i, M) {
        ll from, to, cost, k;
        cin >> from >> to >> cost >> k;
        from--;
        to--;
        G[from].push_back((edge){to, cost, k});
        G[to].push_back((edge){from, cost, k});
    }

    priority_queue<Pll, vector<Pll>, greater<Pll>> que;
    vector<ll> d(N, LLINF);
    d[X] = 0;
    que.push(Pll(0, X));
    
    while (!que.empty()) {
        Pll p = que.top();
        que.pop();

        ll v = p.second;

        if (d[v] < p.first) {
            continue;
        }

        rep (next, G[v].size()) {
            edge e = G[v][next];
            ll nd = ((d[v] + e.k - 1)/e.k)*e.k + e.cost;
            if (d[e.to] > nd) {
                d[e.to] = nd;
                que.push(Pll(d[e.to], e.to));
            }
        }
    }

    if (d[Y] == LLINF) {
        cout << -1 << endl;
    } else {
        cout << d[Y] << endl;
    }
    return 0;
}
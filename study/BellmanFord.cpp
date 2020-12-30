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

#define MAX_V 1000

struct edge {
    ll from;
    ll to;
    ll cost;
};

int main(void)
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    ll V, side, s, g;
    ll d[MAX_V];
    vector<edge> edges;

    cin >> V >> side >> s >> g;

    fill(d, d+V, INF);
    d[s] = 0;

    rep (i, side) {
        struct edge add;
        cin >> add.from;
        cin >> add.to;
        cin >> add.cost;
        edges.push_back(add);
    }

    rep (i, V) {
        rep (j, edges.size()) {
            struct edge e = edges[j];

            if (d[e.to] > d[e.from] + e.cost) {
                d[e.to] = d[e.from] + e.cost;
                if (i == V-1) {
                    cout << "negative loop" << endl;
                    break;
                }
            }
        }
    }

    cout << s << " " << g << endl;
    return 0;
}
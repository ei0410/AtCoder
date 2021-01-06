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

vector<vector<ll>> Graph;

struct Prim {
    ll sum;
    ll N;
    vector<ll> mincost;
    vector<bool> seen;
    
    Prim(vector<vector<ll>> const& G) {
        N = (ll)G.size();
        mincost.assign(N, INF);
        seen.assign(N, false);
        sum = 0;
        mincost[0] = 0;

        while (true) {
            ll v = -1;
            rep (i, N) {
                if (!seen[i] && (v == -1 || mincost[i] < mincost[v])) {
                    v = i;
                }
            }

            if (v == -1) {
                break;
            }

            seen[v] = true;
            sum += mincost[v];
            rep (i, N) {
                if (G[v][i] != -1) {
                    mincost[i] = min(mincost[i], G[v][i]);
                }
            }
        }
    }
};

int main(void)
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    ll N;
    cin >> N;
    Graph.assign(N, vector<ll>(N));
    rep (i, N) {
        rep (j, N) {
            cin >> Graph[i][j];
        }
    }

    Prim prim(Graph);
    cout << prim.sum << endl;
    return 0;
}
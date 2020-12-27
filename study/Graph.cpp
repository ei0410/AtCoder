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

#define MAX_V 100

vector<int> G[MAX_V];

/* // you have some attribute
struct edge {
    int to;
    int cost;
};

vector<edge> G[MAX_V];
*/

int main(int argc, char *argv[])
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    ll V, E;
    cin >> V >> E;

    rep (i, E) {
        ll s, t;
        cin >> s >> t;
        G[s].push_back(t);        
        // G[t].push_back(s); // undirected graph
    }

    rep (i, V) {
        cout << i << "  ";
        rep (j, G[i].size()) {
            cout << G[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
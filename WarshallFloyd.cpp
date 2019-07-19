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

#define MAX_V 210

int main(int argc, char *argv[])
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    int V;
    int d[MAX_V][MAX_V];

    for (int i = 0; i < V; i++) {
        for (int j = 0; j < V; j++) {
            d[i][j] = INF;
        }
    }

    for (int i = 0; i < V; i++) {
        int from, to, cost;
        cin >> from >> to >> cost;
        if (d[from][to] > cost) {
            d[from][to] = cost;
            //d[to][from] = cost;
        }
    }

    for (int k = 0; k < V; k++) {
        for (int i = 0; i < V; i++) {
            for (int j = 0; j < V; j++) {
                d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
            }
        }
    }

    for (int i = 0; i < V; i++) {
        for (int j = 0; j < V; j++) {
            cout << d[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
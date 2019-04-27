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

int V;
int color[MAX_V];

bool dfs(int v, int c) {
    color[v] = c;
    for (int i = 0; i < G[v].size(); i++) {
        if (color[G[v][i]] == c) {
            return false;
        }
        if (color[G[v][i]] == 0 && !dfs(G[v][i], -c)) {
            return false;
        }
    }
    return true;
}

int main(int argc, char *argv[])
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    for (int i = 0; i < V; i++) {
        if (color[i] == 0) {
            if (!dfs(i, 1)) {
                No
                return 0;
            }
        }
    }
    
    Yes
    return 0;
}
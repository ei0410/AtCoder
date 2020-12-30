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

#define MAX_V 50

struct edge {
    ll to;
    ll cost;
};

vector<ll> G[MAX_V];
 
int main(void)
{
    ll V, E;
    cin >> V >> E;

    for (ll i = 0; i < E; i++) {
        ll s, t;
        cin >> s >> t;
        G[s].push_back(t);
        G[t].push_back(s);
    }
    return 0;
}
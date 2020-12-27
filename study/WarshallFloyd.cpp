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

<<<<<<< HEAD
#define MAX_N 310
=======
#define MAX_N 210
>>>>>>> origin/master

int main(int argc, char *argv[])
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    ll N;
    vector<vector<ll>> d(MAX_N, vector<ll>(N, INF));

    rep (i, N) {
        ll from, to, cost;
        cin >> from >> to >> cost;
        if (d[from][to] > cost) {
            d[from][to] = cost;
            //d[to][from] = cost;
        }
    }

    rep (k, N) {
        rep (i, N) {
            rep (j, N) {
                d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
            }
        }
    }

    rep (i, N) {
        rep (j, N) {
            cout << d[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
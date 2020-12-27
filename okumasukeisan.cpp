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

int main(int argc, char *argv[])
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    ll N, K;
    cin >> N >> K;

    vector<ll> a(N), b(N);
    rep (i, N) {
        cin >> a[i];
    }
    rep (i, N) {
        cin >> b[i];
    }

    vector<ll> grid;
    rep (i, min(N, ll(10))) {
        rep (j, min(N, ll(10))) {
            grid.push_back(a[i]*b[j]);
        }
    }

    sort(grid.begin(), grid.end());

    cout << grid[K-1] << endl;
    return 0;
}
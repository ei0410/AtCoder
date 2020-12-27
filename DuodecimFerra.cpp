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

vector<vector<ll>> comb(ll n, ll r) {
    vector<vector<ll>> v(n+1, vector<ll>(n+1, 0));

    rep (i, v.size()) {
        v[i][0] = 1;
        v[i][i] = 1;
    }

    for (ll j = 1; j < v.size(); j++) {
        for (ll k = 1; k < j; k++) {
          v[j][k] = (v[j - 1][k - 1] + v[j - 1][k]);
        }
    }
    return v;
}

int main(void)
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    ll N;
    cin >> N;

    vector<vector<ll>> vv = comb(N-1, 11);

    cout << vv[N-1][11] << endl;
    return 0;
}
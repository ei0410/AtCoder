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

    for (ll i = 1; i < v.size(); i++) {
        for (ll j = 1; j < i; j++) {
            v[i][j] = v[i-1][j-1]+v[i-1][j];
        }
    }

    return v;
}

int main(void)
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    ll n, r;
    cin >> n >> r;

    vector<vector<ll>> ncr = comb(n, r);

    cout << ncr[n][r] << endl;
    return 0;
}
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

int main(int argc, char *argv[])
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    ll D, G;
    cin >> D >> G;

    vector<Pll> P;
    rep (i, D) {
        ll p, c;
        cin >> p >> c;
        P.push_back(make_pair(c, p));
    }

    sort(P.begin(), P.end());
    rep (i, D) {
        cout << P[i].first << " " << P[i].second << endl;
    }

    ll ans = 0;
    ll sum = 0;
    for (ll i = D-1; i <= 0; i--) {
    }
    cout << ans << endl;
    return 0;
}
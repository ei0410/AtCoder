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

    ll N, T;
    cin >> N >> T;

    vector<Pll> p;
    rep (i, N) {
        ll c, t;
        cin >> c >> t;
        p.push_back(make_pair(t, c));
    }

    sort(p.begin(), p.end());

    ll ans = INF;
    rep (i, N) {
        if (p[i].first <= T) {
            ans = min(ans, p[i].second);
        }
    }

    if (ans == INF) {
        cout << "TLE" << endl;
    } else {
        cout << ans << endl;
    }
    return 0;
}
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

    ll N;
    cin >> N;

    vector<Pll> p;
    rep (i, N) {
        ll x, y;
        cin >> x >> y;
        p.push_back(make_pair(x, y));
    }

    map<Pll, ll> m;
    rep (i, N) {
        rep (j, N) {
            if (i != j) {
                ll dx = p[j].first - p[i].first;
                ll dy = p[j].second - p[i].second;
                m[make_pair(dx, dy)]++;
            }
        }
    }

    ll cnt = 0;
    rep (i, N) {
        rep (j, N) {
            ll dx = p[j].first - p[i].first;
            ll dy = p[j].second - p[i].second;
            cnt = max(cnt, m[make_pair(dx, dy)]);
        }
    }

    cout << N-cnt << endl;
    return 0;
}
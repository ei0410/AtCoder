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

int main(void)
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    ll N;
    cin >> N;
    vector<Pll> p;
    rep (i, N) {
        ll X, L;
        cin >> X >> L;
        p.push_back(make_pair(X+L, X-L));
    }

    sort(p.begin(), p.end());

    ll ans = 0;
    ll memo = -INF;
    rep (i, N) {
        if (memo <= p[i].second) {
            ans++;
            memo = p[i].first;
        }
    }

    cout << ans << endl;
    return 0;
}
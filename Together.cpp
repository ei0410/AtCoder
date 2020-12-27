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

    vector<ll> a(N);
    rep (i, N) {
        cin >> a[i];
    }

    vector<ll> m(100010, 0);
    rep (i, N) {
        m[a[i]]++;
    }

    ll ans = 0;
    for (ll i = 1; i < 100009; i++) {
        ll tmp = (m[i-1]+m[i]+m[i+1]);
        ans = max(ans, tmp);
    }

    cout << ans << endl;
    return 0;
}

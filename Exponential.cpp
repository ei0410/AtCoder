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

    ll X;
    cin >> X;

    vector<ll> v;
    for (ll i = 1; i < 32; i++) {
        for (ll j = 2; j < 10; j++) {
            if (pow(i, j) <= X) {
                v.push_back(pow(i, j));
            }
        }
    }

    ll ans = 0;
    rep (i, v.size()) {
        ans = max(ans, v[i]);
    }

    cout << ans << endl;
    return 0;
}
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

    ll N, x;
    cin >> N >> x;

    vector<ll> a(N);
    rep (i, N) {
        cin >> a[i];
    }

    ll ans = 0;
    rep (i, N-1) {
        if (a[i]+a[i+1] > x) {
            ll tmp = a[i]+a[i+1]-x;
            if (a[i+1] - tmp > 0) {
                a[i+1] -= tmp;
            } else {
                a[i+1] = 0;
            }
            ans += tmp;
        }
    }

    cout << ans << endl;
    return 0;
}
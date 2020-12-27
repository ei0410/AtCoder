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

ll pow_mod(ll n, ll k, ll m) {
    if (k == 0) {
        return 1;
    } else if (k%2) {
        return pow_mod(n, k-1, m) * n % m;
    } else {
        ll t = pow_mod(n, k/2, m);
        return t*t%m;
    }
}

ll comb(ll n, ll r) {
    ll ans = 1;

    for (ll i = n; i > n-r; i--) {
        ans = ans*i%MOD;
    }
    for (ll i = 1; i < r+1; i++) {
        ans = ans*pow_mod(i, MOD-2, MOD) % MOD;
    }

    return ans%MOD;
}

int main(int argc, char *argv[])
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    ll X, Y;
    cin >> X >> Y;

    if ((X+Y)%3 != 0) {
        cout << 0 << endl;
        return 0;
    }

    ll n, m;
    n = (2*Y-X)/3;
    m = (2*X-Y)/3;
    if (n < 0 || m < 0) {
        cout << 0 << endl;
        return 0;
    }

    if (n < m) {
        swap(n, m);
    }

    n += m;

    cout << comb(n, m) << endl;
    return 0;
}
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

ll dcomb(ll n, ll r) {
    return comb(n+r-1, r);
}

int main(int argc, char *argv[])
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    ll N, a, b;
    cin >> N >> a >> b;

    ll tmp1 = pow_mod(2, N, MOD) - 1;
    ll tmp2 = comb(N, a);
    ll tmp3 = comb(N, b);

    ll ans = tmp1 + MOD - tmp2;
    ans %= MOD;
    ans += MOD - tmp3;
    ans %= MOD;

    cout << ans << endl;
    return 0;
}
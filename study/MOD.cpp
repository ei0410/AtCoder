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

ll modinv(ll a, ll m) {
    ll b = m;
    ll u = 1;
    ll v = 0;
    while (b) {
        ll t = a/b;
        a -= t*b; 
        swap(a, b);
        u -= t*v; 
        swap(u, v);
    }
    u %= m;
    if (u < 0) {
        u += m;
    }
    return u;
}

ll modpow(ll a, ll n, ll mod) {
    ll res = 1;
    while (n > 0) {
        if (n & 1) {
            res = res*a%mod;
        }
        a = a*a%mod;
        n >>= 1;
    }
    return res;
}

int main(void)
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    for (ll i = 1; i < 13; i++) {
        cout << i << " " << modinv(i, 13) << endl;
    }

    cout << modpow(3, 45, MOD) << endl;
    return 0;
}
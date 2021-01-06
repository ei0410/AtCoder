#include <bits/stdc++.h> 

using namespace std;

#define YES cout << "YES" << endl;
#define NO  cout << "NO"  << endl;
#define Yes cout << "Yes" << endl;
#define No  cout << "No"  << endl;
 
#define INF INT_MAX
#define LLINF LLONG_MAX
#define MOD 1000000007
#define PI  acos(-1)

using ll  = long long;
using ull = unsigned long long;
using Pii = pair<int, int>;
using Pll = pair<ll, ll>;

#define rep(i, n) for (ll i = 0; i < n; i++)
#define rrep(i, n) for (ll i = (n)-1; i >= 0; i--)

template<class T> inline bool chmin(T& a, T b) {
    if (a > b) {
        a = b;
        return true;
    }
    return false;
}

template<class T> inline bool chmax(T& a, T b) {
    if (a < b) {
        a = b;
        return true;
    }
    return false;
}

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

int main(void)
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    ll N;
    cin >> N;

    const ll mod = 998244353;

    vector<ll> m(N-1, 0);
    rep (i, N) {
        ll D;
        cin >> D;
        if (i == 0 && D != 0) {
            cout << 0 << endl;
            return 0;
        }
        m[D]++;
    }

    if (m[0] != 1) {
        cout << 0 << endl;
        return 0;
    }

    ll ans = 1;
    rep (i, N-1) {
        ans *= pow_mod(m[i], m[i+1], mod);
        ans %= mod;
    }

    cout << ans << endl;
    return 0;
}
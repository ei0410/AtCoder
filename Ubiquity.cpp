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

ll modpow(ll n, ll p) {
    if (p == 0) {
        return 1;
    }
    
    if (p%2 == 0) {
        ll t = modpow(n, p/2);
        return t*t % MOD;
    } else {
        return n * modpow(n, p-1) % MOD;
    }
}

int main(void)
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    ll N;
    cin >> N;

    ll ans = modpow(10, N)-modpow(9, N)-modpow(9, N)+modpow(8, N);
    ans %= MOD;
    cout << (ans+MOD)%MOD << endl;
    return 0;
}
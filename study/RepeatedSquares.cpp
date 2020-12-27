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

ll modpow(ll n, ll m, ll p) {
    if (p == 0) {
        return 1;
    }
    
    if (p%2 == 0) {
        ll t = modpow(n, m, p/2);
        return t*t % m;
    } else {
        return n * modpow(n, m, p-1) % m;
    }
}

int main(void)
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    ll N, P, M;
    cin >> N >> M >> P;

    cout << modpow(N, M, P) << endl;
    return 0;
}
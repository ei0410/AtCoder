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

ll fact(ll n) {
    if (n == 1) {
        return 1;
    } else {
        return (n * fact(n - 1)) % MOD;
    }
}

int main(int argc, char *argv[])
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    ll N, M;
    cin >> N >> M;

    ll ans = 0;
    if (abs(N-M) == 0) {
        ans = fact(N)*fact(M)*2;
        ans %= MOD;
    } else if (abs(N-M) == 1) {
        ans = fact(N)*fact(M);
        ans %= MOD;
    }

    cout << ans << endl;
    return 0;
}
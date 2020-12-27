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

    vector<ll> x(N+1);
    for (ll i = 2; i <= N; i++) {
        ll tmp = i;
        for (ll j = 2; j <= tmp; j++) {
            while (tmp > 0 && tmp%j == 0) {
                x[j]++;
                tmp /= j;
            }
        }
    }

    ll ans = 1;
    rep (i, N+1) {
        if (x[i] > 0) {
            ans *= (x[i]+1);
            ans %= MOD;
        }
    }

    cout << ans << endl;
    return 0;
}
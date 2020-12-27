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

int main(void)
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    ll N;
    cin >> N;

    vector<ll> A(N);
    rep (i, N) {
        cin >> A[i];
    }

    vector<ll> sum(N+1, 0);
    rep (i, N) {
        sum[i+1] = sum[i] + A[i];
    }

    ll x = 0;
    ll ans = 0;
    ll cur = 0;
    rep (i, N) {
        x = max(x, sum[i+1]);
        ans = max(ans, x+cur);
        cur += sum[i+1];
    }

    cout << ans << endl;
    return 0;
}
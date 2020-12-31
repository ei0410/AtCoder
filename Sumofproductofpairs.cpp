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

    vector<ll> A(N), tmp(N);
    rep (i, N) {
        cin >> A[i];
        tmp[i] = A[i];
    }

    reverse(tmp.begin(), tmp.end());
    
    vector<ll> sum(N+1, 0);

    rep (i, N) {
        sum[i+1] = (sum[i]+tmp[i])%MOD;
    }

    sum.pop_back();
    reverse(sum.begin(), sum.end());

    ll ans = 0;
    rep (i, N) {
        (ans += A[i]*sum[i]) %= MOD;
    }

    cout << ans << endl;
    return 0;
}
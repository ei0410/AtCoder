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

    vector<ll> t(N);
    rep (i, N) {
        cin >> t[i];
    }

    ll ans = INF;
    for (ll bit = 0; bit < (1<<N); bit++) {
        ll tmp1 = 0;
        ll tmp2 = 0;
        for (ll i = 0; i < N; i++) {
            if (bit & (1<<i)) {
                tmp1 += t[i];
            } else {
                tmp2 += t[i];
            }
        }
        ans = min(ans, max(tmp1, tmp2));
    }

    cout << ans << endl;
    return 0;
}
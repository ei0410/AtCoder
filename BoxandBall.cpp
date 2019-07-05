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

    ll N, M;
    cin >> N >> M;

    vector<ll> cnt(N+1, 1);
    vector<bool> flags(N+1, false);
    flags[1] = true;

    rep (i, M) {
        ll x, y;
        cin >> x >> y;

        if (flags[x]) {
            cnt[x]--;
            cnt[y]++;
            flags[y] = true;
            if (cnt[x] <= 0) {
                flags[x] = false;
            }
        }
    }

    ll ans = 0;
    for (ll i = 1; i <= N; i++) {
        if (flags[i]) {
            ans++;
        }
    }

    cout << ans << endl;
    return 0;
}
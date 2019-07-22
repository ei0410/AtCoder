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

    vector<ll> k(M);
    vector<vector<ll>> s(M);
    rep (i, M) {
        cin >> k[i];
        rep (j, k[i]) {
            ll tmp;
            cin >> tmp;
            tmp--;
            s[i] |= (1 << i);
        }
    }

    vector<ll> p(M);
    rep (i, M) {
        ll tmp = 0;
        cin >> tmp;
        p[i] |= (tmp << i);
    }

    ll ans = 0;
    for (ll bit = 0; bit < (1<<N); bit++) {
        ll tmp = 0;
        for (ll i = 0; i < N; i++) {
            if ((1 & i)<<bit) {
                tmp ^= s[i];
            }
        }
        if (tmp == p[i]) {
            ans++;
        }
    }

    cout << ans << endl;
    return 0;
}

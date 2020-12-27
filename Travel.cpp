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

    ll N, K;
    cin >> N >> K;

    vector<vector<ll>> T(N, vector<ll>(N, 0));
    rep (i, N) {
        rep (j, N) {
            cin >> T[i][j];
        }
    }

    vector<ll> v(N);
    rep (i, N) {
        v[i] = i;
    }

    v.erase(v.begin());

    ll ans = 0;
    do {
        ll tmp = T[0][v[0]];
        rep (i, v.size()-1) {
            tmp += T[v[i]][v[i+1]];
        }
        tmp += T[v[v.size()-1]][0];
        if (tmp == K) {
            ans++;
        }
    } while (next_permutation(v.begin(), v.end()));

    cout << ans << endl;
    return 0;
}
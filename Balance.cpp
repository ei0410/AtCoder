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

#define rep(i, n) for (ll i = 0; i < n; i++)

int main(int argc, char *argv[])
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    ll N;
    cin >> N;

    vector<ll> W(N);
    rep (i, N) {
        cin >> W[i];
    }

    ll ans = INF;
    rep (i, N) {
        ll a = 0;
        ll b = 0;
        for (ll j = 0; j < i; j++) {
            a += W[j];
        }
        for (ll j = i; j < N; j++) {
            b += W[j];
        }
        ans = min(ans, abs(a-b));
    }

    cout << ans << endl;
    return 0;
}
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

    vector<ll> a(N);
    rep (i, N) {
        cin >> a[i];
    }

    double ans = 0;
    rep (i, N) {
        ll cnt = 0;
        rep (j, N) {
            if (i == j) {
                continue;
            }
            if (a[i]%a[j] == 0) {
                cnt++;
            }
        }
        if (cnt == 0) {
            ans++;
        } else if (cnt%2 == 0) {
            ans += (cnt + 2.0)/(2.0*cnt + 2.0);
        } else {
            ans += 1.0/2.0;
        }
    }

    cout << fixed << setprecision(12) << ans << endl;
    return 0;
}
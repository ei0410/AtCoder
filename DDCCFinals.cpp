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

    ll X, Y;
    cin >> X >> Y;

    ll ans = 0;
    if (X == 1 && Y == 1) {
        cout << 1000000 << endl;
    } else {
        if (X == 1) {
            ans += 300000;
        } else if (X == 2) {
            ans += 200000;
        } else if (X == 3) {
            ans += 100000;
        }
        if (Y == 1) {
            ans += 300000;
        } else if (Y == 2) {
            ans += 200000;
        } else if (Y == 3) {
            ans += 100000;
        }
        cout << ans << endl;
    }
    return 0;
}
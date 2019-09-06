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

    ll x, y;
    cin >> x >> y;

    if (x == 0) {
        if (y >= 0) {
            cout << y << endl;
            return 0;
        } else {
            cout << abs(y)+1 << endl;
            return 0;
        }
    }

    if (y == 0) {
        if (x > 0) {
            cout << x+1 << endl;
            return 0;
        } else {
            cout << abs(x) << endl;
            return 0;
        }
    }

    ll ans = 0;
    if (x > 0) {
        if (y > 0) {
            if (abs(y) > abs(x)) {
                ans = abs(y)-abs(x);
            } else {
                ans = abs(x)-abs(y)+2;
            }
        } else {
            if (abs(y) > abs(x)) {
                ans = abs(y)-abs(x)+1;
            } else {
                ans = abs(x)-abs(y)+1;
            }
        }
    } else {
        if (y > 0) {
            if (abs(y) > abs(x)) {
                ans = abs(y)-abs(x)+1;
            } else {
                ans = abs(x)-abs(y)+1;
            }
        } else {
            if (abs(y) > abs(x)) {
                ans = abs(y)-abs(x)+2;
            } else {
                ans = abs(x)-abs(y);
            }
        }
    }

    cout << ans << endl;
    return 0;
}
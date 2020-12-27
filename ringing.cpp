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

    ll a, b, c;
    cin >> a >> b >> c;

    ll ans = 0;
    if (a < b) {
        if (b < c) {
            ans = a+b;
        } else {
            ans = a+c;
        }
    } else {
        if (a < c) {
            ans = a+b;
        } else {
            ans = b+c;
        }
    }

    cout << ans << endl;
    return 0;
}

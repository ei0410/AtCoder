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

    ll A, B, C, X, Y;
    cin >> A >> B >> C >> X >> Y;

    ll ans = INF;
    for (ll i = 0; i <= max(X, Y); i++) {
        if (X-i < 0) {
            ans = min(ans, C*2*i+B*(Y-i));
        } else if (Y-i < 0) {
            ans = min(ans, C*2*i+A*(X-i));
        } else {
            ans = min(ans, C*2*i+A*(X-i)+B*(Y-i));
        }
    }

    cout << ans << endl;
    return 0;
}
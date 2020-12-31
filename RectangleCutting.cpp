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

    ll W, H, x, y;
    cin >> W >> H >> x >> y;

    double ans = (double)(W) * double(H)/2;
    cout << fixed << setprecision(10) << ans << " ";

    if (x*2 == W && y*2 == H) {
        cout << 1 << endl;
    } else {
        cout << 0 << endl;
    }
    return 0;
}
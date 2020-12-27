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

    double a, b, x;
    cin >> a >> b >> x;

    double ans;

    if (a*a*b <= 2.0*x) {
        ans = atan2(2.0*(a*a*b-x)/(a*a), a);
    } else {
        ans = atan2(b, (2.0*x)/(a*b));
    }

    cout << fixed << setprecision(10) << ans * 180.0 / PI << endl;
    return 0;
}
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

    bool flag = true;
    ll T = 0;
    ll X = 0;
    ll Y = 0;
    rep (i, N) {
        ll t, x, y;
        cin >> t >> x >> y;

        ll dt = t-T;
        ll dist = abs(x-X)+abs(y-Y);
        if ((dt < dist) || (dt%2 != dist%2)) {
            flag = false;
        }

        T = t;
        X = x;
        Y = y;
    }

    if (flag) {
        Yes;
    } else {
        No;
    }
    return 0;
}
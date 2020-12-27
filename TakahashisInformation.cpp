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

    ll c[3][3];
    rep (i, 3) {
        rep (j, 3) {
            cin >> c[i][j];
        }
    }

    ll a[3], b[3];
    rep (i, 3) {
        b[i] = c[0][i];
        a[i] = c[i][0]-b[0];
    }

    bool flag = true;
    rep (i, 3) {
        rep (j, 3) {
            if (a[i]+b[j] != c[i][j]) {
                flag = false;
                break;
            }
        }
    }

    if (flag) {
        Yes;
    } else {
        No;
    }
    return 0;
}
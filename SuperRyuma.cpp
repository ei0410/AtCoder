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

int main(void)
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    ll r1, c1, r2, c2;
    cin >> r1 >> c1 >> r2 >> c2;

    if (r1 == r2 && c1 == c2) {
        cout << 0 << endl;
        return 0;
    } 

    ll dr = abs(r2-r1);
    ll dc = abs(c2-c1);

    if (dr == dc) {
        cout << 1 << endl;
        return 0;
    }

    if (dr + dc <= 3) {
        cout << 1 << endl;
        return 0;
    }

    ll tmp = abs(dr-dc);
    if (tmp <= 3) {
        cout << 2 << endl;
    } else {
        if (tmp%2==0) {
            cout << 2 << endl;
        } else {
            cout << 3 << endl;
        }
    }
    return 0;
}
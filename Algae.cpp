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

    ll r, D, x;
    cin >> r >> D >> x;

    ll ans[10];

    ans[0] = r*x - D;
    ans[1] = r*ans[0] - D;
    ans[2] = r*ans[1] - D;
    ans[3] = r*ans[2] - D;
    ans[4] = r*ans[3] - D;
    ans[5] = r*ans[4] - D;
    ans[6] = r*ans[5] - D;
    ans[7] = r*ans[6] - D;
    ans[8] = r*ans[7] - D;
    ans[9] = r*ans[8] - D;

    rep (i, 10) {
        cout << ans[i] << endl;
    }
    return 0;
}
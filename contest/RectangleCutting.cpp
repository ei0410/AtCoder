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

    ll tile[4];
    tile[0] = W*(H-y);
    tile[1] = W*y;
    tile[2] = H*(W-x);
    tile[3] = H*x;

    double ans = 0;
    bool flag = false;
    ll tmp1 = 0;
    ll tmp2 = 0;
    if (tile[0] < tile[1]) {
        tmp1 = tile[0];
        if (tile[2] < tile[3]) {
            tmp2 = tile[2];
        } else if (tile[2] > tile[3]) {
            tmp2 = tile[3];
        } else {
            tmp2 = tile[2];
        }
        if (tmp1 < tmp2) {
            ans = tmp2;
        } else if (tmp1 > tmp2) {
            ans = tmp1;
        } else {
            flag = true;
            ans = tmp1;
        }
    } else if (tile[0] > tile[1]) {
        tmp1 = tile[1];
        if (tile[2] < tile[3]) {
            tmp2 = tile[2];
        } else if (tile[2] > tile[3]) {
            tmp2 = tile[3];
        } else {
            tmp2 = tile[2];
        }
        if (tmp1 < tmp2) {
            ans = tmp2;
        } else if (tmp1 > tmp2) {
            ans = tmp1;
        } else {
            flag = true;
            ans = tmp1;
        }
    } else {
        tmp1 = tile[1];
        if (tile[2] < tile[3]) {
            tmp2 = tile[2];
        } else if (tile[2] > tile[3]) {
            tmp2 = tile[3];
        } else {
            tmp2 = tile[2];
        }
        if (tmp1 < tmp2) {
            ans = tmp2;
        } else if (tmp1 > tmp2) {
            ans = tmp1;
        } else {
            flag = true;
            ans = tmp1;
        }
    }

    if (flag) {
        cout << fixed;
        cout << setprecision(6) << ans << " " << 1 << endl;
    } else {
        cout << fixed;
        cout << setprecision(6) << ans << " " << 0 << endl;
    }
    return 0;
}
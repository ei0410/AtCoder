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

    ll H, W;
    cin >> H >> W;

    if (H%3 == 0 || W%3 == 0) {
        cout << 0 << endl;
        return 0;
    } 

    ll ans = INF;
    for (ll i = 1; i < H; i++) {
        ll tmp1 = i*W;
        if ((H-i)%2 == 0) {
            ll tmp2 = ((H-i)/2)*W;
            ans = min(ans, abs(tmp1-tmp2));
        } else {
            ll tmp2 = ((H-i)/2)*W;
            ll tmp3 = ((H-i)/2+1)*W;

            ll tmp4 = max(tmp1, max(tmp2, tmp3));
            ll tmp5 = min(tmp1, min(tmp2, tmp3));
            ans = min(ans, abs(tmp4-tmp5));
        }
    }
    for (ll i = 1; i < H; i++) {
        ll tmp1 = i*W;
        if (W%2 == 0) {
            ll tmp2 = (W/2)*(H-i);
            ans = min(ans, abs(tmp1-tmp2));
        } else {
            ll tmp2 = (W/2)*(H-i);
            ll tmp3 = ((W/2)+1)*(H-i);

            ll tmp4 = max(tmp1, max(tmp2, tmp3));
            ll tmp5 = min(tmp1, min(tmp2, tmp3));
            ans = min(ans, abs(tmp4-tmp5));
        }
    }
    for (ll i = 1; i < W; i++) {
        ll tmp1 = i*H;
        if ((W-i)%2 == 0) {
            ll tmp2 = ((W-i)/2)*H;
            ans = min(ans, abs(tmp1-tmp2));
        } else {
            ll tmp2 = ((W-i)/2)*H;
            ll tmp3 = ((W-i)/2+1)*H;

            ll tmp4 = max(tmp1, max(tmp2, tmp3));
            ll tmp5 = min(tmp1, min(tmp2, tmp3));
            ans = min(ans, abs(tmp4-tmp5));
        }
    }
    for (ll i = 1; i < W; i++) {
        ll tmp1 = i*H;
        if (H%2 == 0) {
            ll tmp2 = (H/2)*(W-i);
            ans = min(ans, abs(tmp1-tmp2));
        } else {
            ll tmp2 = (H/2)*(W-i);
            ll tmp3 = ((H/2)+1)*(W-i);

            ll tmp4 = max(tmp1, max(tmp2, tmp3));
            ll tmp5 = min(tmp1, min(tmp2, tmp3));
            ans = min(ans, abs(tmp4-tmp5));
        }
    }

    cout << ans << endl;
    return 0;
}
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

    vector<int> a(5);
    rep (i, 5) {
        cin >> a[i];
    }

    bool flag = false;
    rep (i, 5) {
        if (a[i] % 10) {
            flag = true;
        }
    }

    int digit = 9;
    int tmp = 0;
    int ans = 0;
    if (flag) {
        rep (i, 5) {
            if (a[i] % 10 != 0) {
                digit = min(digit, a[i] % 10);
            }
        }

        rep (i, 5) {
            if (i == tmp) {
                ans += ((a[i]/10)*10+digit);
            } else if (a[i] % 10) {
                ans += ((a[i]/10+1)*10);
            } else {
                ans += a[i];
            }
        }
    } else {
        rep (i, 5) {
            ans += a[i];
        }
    }

    cout << ans << endl;
    return 0;
}
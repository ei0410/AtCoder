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

    int a[5];
    rep (i, 5) {
        cin >> a[i];
    }

    int mi = INF;
    int index = 0;
    rep (i, 5) {
        if (a[i]%10!=0) {
            if (a[i]%10 < mi) {
                mi = a[i]%10;
                index = i;
            }
        }
    }

    int ans = 0;
    if (mi == INF) {
        rep (i, 5) {
            ans += a[i];
        }
    } else {
        rep (i, 5) {
            if (i == index) {
                ans += a[i];
            } else {
                if (a[i]%10 == 0) {
                    ans += a[i];
                } else {
                    ans += (a[i]/10)*10+10;
                }
            }
        }
    }
    
    cout << ans << endl;
    return 0;
}
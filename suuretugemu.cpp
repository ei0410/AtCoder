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

    int N;
    cin >> N;

    vector<int> a(N);
    rep (i, N) {
        cin >> a[i];
    }

    int ans = -INF;
    rep (i, N) {
        int tmp1 = -INF;
        int tmp2 = -INF;
        rep (j, N) {
            if (i == j) {
                continue;
            }
            int l = min(i, j);
            int r = max(i, j);
            int takahashi = 0;
            int aoki = 0;
            for (int k = 0; k <= r-l; k++) {
                if (k%2 == 0) {
                    takahashi += a[l+k];
                } else {
                    aoki += a[l+k];
                }
            }
            if (tmp2 < aoki) {
                tmp1 = takahashi;
                tmp2 = aoki;
            }
        }
        ans = max(ans, tmp1);
    }

    cout << ans << endl;
    return 0;
}
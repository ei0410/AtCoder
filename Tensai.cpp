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

    int N, X;
    cin >> N >> X;

    vector<int> a(N), b(N);
    rep (i, N) {
        cin >> a[i] >> b[i];
    }

    int memo = 0;
    int tmp = 0;
    rep (i, N) {
        if (tmp < b[i]) {
            tmp = b[i];
            memo = i;
        }
    }

    int ans = 0;
    rep (i, N) {
        if (i == memo) {
            ans += (a[i]+X)*b[i];
        } else {
            ans += a[i]*b[i];
        }
    }

    cout << ans << endl;
    return 0;
}
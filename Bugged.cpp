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

    ll N;
    cin >> N;

    vector<ll> s(N);
    rep (i, N) {
        cin >> s[i];
    }

    rep (i, N) {
        if (s[i]%10 != 0) {
            break;
        } else {
            if (i == N-1) {
                cout << 0 << endl;
                return 0;
            }
        }
    } 

    ll ans = 0;
    rep (i, N) {
        ans += s[i];
    }

    ll mi = INF;
    if (ans%10 == 0) {
        rep (i, N) {
            if (s[i]%10 != 0) {
                mi = min(mi, s[i]);
            }
        }
        ans -= mi;
    }

    cout << ans << endl;
    return 0;
}
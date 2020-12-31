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

    string s;
    cin >> s;

    ll cnt = 0;
    ll ans = 0;
    rep (i, s.size()) {
        if (!cnt) {
            if (s[i] == 'p') {
                ans--;
            }
            cnt++;
        } else {
            if (s[i] == 'g') {
                ans++;
            }
            cnt--;
        }
    }

    cout << ans << endl;
    return 0;
}
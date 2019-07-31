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

    ll ans = 0;
    for (ll i = 1; i < s.size(); i++) {
        if (s[i] != '9') {
            break;
        }
        if (i == s.size()-1) {
            rep (i, s.size()) {
                ans += s[i]-'0';
            }
            cout << ans << endl;
            return 0;
        }
    }

    if (s.size() == 1) {
        cout << s << endl;
        return 0;
    }

    ans += s[0]-'1';
    for (ll i = 1; i < s.size(); i++) {
        ans += 9;
    }

    cout << ans << endl;
    return 0;
}
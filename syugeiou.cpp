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

    ll N;
    cin >> N;

    string S;
    cin >> S;

    if (S == "b") {
        cout << 0 << endl;
        return 0;
    }

    string s = "b";
    ll ans = 0;
    rep (i, 100) {
        if (S == s) {
            ans = i;
            break;
        }
        if (i%3 == 0) {
            s.insert(0, "a");
            s += "c";
        }
        if (i%3 == 1) {
            s.insert(0, "c");
            s += "a";
        }
        if (i%3 == 2) {
            s.insert(0, "b");
            s += "b";
        }
    }

    if (ans) {
        cout << ans << endl;
    } else {
        cout << -1 << endl;
    }
    return 0;
}
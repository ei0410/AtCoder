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

    double N;
    cin >> N;

    string s;
    cin >> s;

    double ans = 0;
    rep (i, N) {
        if (s[i] == 'A') {
            ans += 4.0;
        }
        if (s[i] == 'B') {
            ans += 3.0;
        }
        if (s[i] == 'C') {
            ans += 2.0;
        }
        if (s[i] == 'D') {
            ans += 1.0;
        }
        if (s[i] == 'F') {
            ans += 0.0;
        }
    }

    if (ans) {
        cout << setprecision(15) << ans/N << endl;
    } else {
        cout << 0 << endl;
    }
    return 0;
}
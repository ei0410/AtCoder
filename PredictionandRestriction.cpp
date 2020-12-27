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

int main(void)
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    ll N, K;
    cin >> N >> K;

    ll R, S, P;
    cin >> R >> S >> P;

    string T;
    cin >> T;

    ll ans = 0;
    string s = "";
    rep (i, N) {
        if (T[i] == 'r') {
            if (i-K >= 0) {
                if (s[i-K] != 'r') {
                    ans += P;
                    s += T[i];
                } else {
                    s += " ";
                }
            } else {
                ans += P;
                s += T[i];
            }
        } else if (T[i] == 's') {
            if (i-K >= 0) {
                if (s[i-K] != 's') {
                    ans += R;
                    s += T[i];
                } else {
                    s += " ";
                }
            } else {
                ans += R;
                s += T[i];
            }
        } else if (T[i] == 'p') {
            if (i-K >= 0) {
                if (s[i-K] != 'p') {
                    ans += S;
                    s += T[i];
                } else {
                    s += " ";
                }
            } else {
                ans += S;
                s += T[i];
            }
        }
    }

    cout << ans << endl;
    return 0;
}
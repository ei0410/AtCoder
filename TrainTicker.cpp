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

    string S;
    cin >> S;

    ll n = 3;
    for (ll bit = 0; bit < (1<<n); bit++) {
        ll tmp = S[0]-'0';
        string ans = "";
        ans += S[0];
        for (ll i = 0; i < n; i++) {
            if (bit & (1<<i)) {
                tmp += (S[i+1]-'0');
                ans += "+";
            } else {
                tmp -= (S[i+1]-'0');
                ans += "-";
            }
            ans += S[i+1];
        }

        if (tmp == 7) {
            cout << ans + "=7" << endl;
            return 0;
        }
    }
    return 0;
}
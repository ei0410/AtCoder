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

    string T;
    cin >> T;

    ll ans = 0;
    ll tmp = 0;
    for (int i = 0; i < T.size()-1; i+=2) {
        if ((T[i] == '2' || T[i] == '?') && (T[i+1] == '5' || T[i+1] == '?')) {
            tmp += 2;
        } else {
            tmp = 0;
        }
        ans = max(ans, tmp);
    }
    tmp = 0;
    for (int i = 1; i < T.size()-1; i+=2) {
        if ((T[i] == '2' || T[i] == '?') && (T[i+1] == '5' || T[i+1] == '?')) {
            tmp += 2;
        } else {
            tmp = 0;
        }
        ans = max(ans, tmp);
    }

    cout << ans << endl;
    return 0;
}
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

    ll ans = 0;
    ll len = S.size();
    rep (i, len) {
        bool flag = true;
        rep (j, S.size()) {
            if (S[j] != '0' && S[S.size()-(1+j)] != '0' && S[j] != S[S.size()-(1+j)]) {
                flag = false;
                break;
            }
        }
        
        if (flag) {
            cout << ans << endl;
            break;
        } else {
            S += '0';
            ans++;
        }
    }
    return 0;
}
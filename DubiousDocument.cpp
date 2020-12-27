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

    int n;
    cin >> n;

    vector<string> S(n);
    rep (i, n) {
        cin >> S[i];
    }

    vector<int> v(26);
    rep (i, S[0].size()) {
        v[S[0][i]-'a']++;
    }

    for (int i = 1; i < n; i++) {
        vector<int> tmp(26);
        rep (j, S[i].size()) {
            tmp[S[i][j]-'a']++;
        }
        rep (j, 26) {
            v[j] = min(v[j], tmp[j]);
        }
    }

    string ans = "";
    rep (i, 26) {
        if (v[i] > 0) {
            rep (j, v[i]) {
                ans += (i+'a');
            }
        }
    }

    cout << ans << endl;
    return 0;
}
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

    string S;
    cin >> S;

    if (S == "zyxwvutsrqponmlkjihgfedcba") {
        cout << -1 << endl;
        return 0;
    }

    if (S.size() < 26) {
        vector<bool> alphbet(26, false);
        rep (i, S.size()) {
            alphbet[S[i]-'a'] = true;
        }
        rep (i, 26) {
            if (!alphbet[i]) {
                cout << S << char('a'+i) << endl;
                return 0;
            }
        }
    } else {
        string tmp = S;
        
        if (next_permutation(tmp.begin(), tmp.end())) {
            rep (i, 26) {
                if (S[i] == tmp[i]) {
                    cout << tmp[i];
                } else {
                    cout << tmp[i] << endl;
                    return 0;
                }
            }
        }
    }

    return 0;
}
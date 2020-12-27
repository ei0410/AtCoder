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

    ll N, M;
    cin >> N >> M;

    vector<ll> s(M), c(M);
    rep (i, M) {
        cin >> s[i] >> c[i];
        s[i]--;
    }

    rep (i, 1000) {
        string str = to_string(i);
        if (str.size() != N) {
            continue;
        }

        bool flag = true;
        rep (i, M) {
            if (str[s[i]] - '0' != c[i]) {
                flag = false;
            }
        }
        
        if (flag) {
            cout << i << endl;
            return 0;
        }
    }

    cout << -1 << endl;
    return 0;
}
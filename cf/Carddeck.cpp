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

    ll t;
    cin >> t;

    while (t--) {
        ll n;
        cin >> n;

        vector<ll> p(n+1);
        rep (i, n) {
            cin >> p[i+1];
        }

        ll now = n;
        vector<bool> done(n+1, false);

        for (ll i = n; i >= 1; i--) {
            if (done[i]) {
                continue;
            }

            vector<ll> ans;
            while (true) {
                ans.push_back(p[now]);
                done[p[now]] = true;
                if (p[now--] == i) {
                    break;
                }
            }

            reverse(ans.begin(), ans.end());

            rep (j, ans.size()) {
                cout << ans[j] << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
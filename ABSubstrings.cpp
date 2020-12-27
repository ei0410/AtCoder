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

#define rep(i, n) for (ll i = 0; i < n; i++)

int main(int argc, char *argv[])
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    ll N;
    cin >> N;

    vector<string> s(N);
    rep (i, N) {
        cin >> s[i];
    }

    ll ans = 0;
    rep (i, N) {
        for (ll j = 0; j < s[i].size()-1; j++) {
            if (s[i][j] == 'A' && s[i][j+1] == 'B') {
                ans++;
            }
        }
    }

    ll a = 0;
    ll b = 0;
    ll banda = 0;
    rep (i, N) {
        if (s[i].front() == 'B' && s[i].back() == 'A') {
            banda++;
        } else if (s[i].front() == 'B' && s[i].back() != 'A') {
            b++;
        } else if (s[i].front() != 'B' && s[i].back() == 'A') {
            a++;
        }
    }

    if (a == 0 && b == 0 && banda > 0) {
        cout << ans + min(a, b) + banda - 1 << endl;
    } else {
        cout << ans + min(a, b) + banda << endl;
    }
    return 0;
}
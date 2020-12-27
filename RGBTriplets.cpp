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

    ll N;
    cin >> N;

    string S;
    cin >> S;

    vector<ll> num(3, 0);
    rep (i, N) {
        if (S[i] == 'R') {
            num[0]++;
        } else if (S[i] == 'G') {
            num[1]++;
        } else if (S[i] == 'B') {
            num[2]++;
        }
    }

    ll ans = 1;
    rep (i, 3) {
        ans *= num[i];
    }

    rep (i, N) {
        for (ll j = i+1; j < N; j++) {
            ll k = j + (j-i);
            if (k < N) {
                if (S[i] == S[j] || S[j] == S[k] || S[k] == S[i]) {
                    continue;
                }
                ans--;
            }
        }
    }

    cout << ans << endl;
    return 0;
}
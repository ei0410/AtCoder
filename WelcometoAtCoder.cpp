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

    ll N, M;
    cin >> N >> M;

    vector<ll> ac(N), pena(N);
    rep (i, M) {
        ll p;
        string S;
        cin >> p >> S;
        p--;
        if (ac[p]) {
            continue;
        }
        if (S == "AC") {
            ac[p] = 1;
        } else {
            pena[p]++;
        }
    }

    ll ans1 = 0;
    ll ans2 = 0;
    rep (i, N) {
        if (ac[i]) {
            ans1++;
            ans2 += pena[i];
        }
    }

    cout << ans1 << " " << ans2 << endl;
    return 0;
}
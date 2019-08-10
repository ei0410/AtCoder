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

    vector<Pll> p;
    rep (i, N) {
        ll A, B;
        cin >> A >> B;
        p.push_back(make_pair(B, A));
    }

    sort(p.rbegin(), p.rend());

    ll ans = 0;
    rep(i, N) {
        if (M >= p[i].second) {
            ans += p[i].first;
        }
        M--;
    }
    /*
    rep (i, N) {
        cout << p[i].first << " " << p[i].second << endl;
    }
    */

    cout << ans << endl;
    return 0;
}
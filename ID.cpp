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

    vector<ll> id(100010);
    vector<vector<Pll>> p(100010);
    rep (i, M) {
        ll P, Y;
        cin >> P >> Y;
        P--;
        p[P].push_back(Pll(Y, i));
    }

    rep (i, N) {
        sort(p[i].begin(), p[i].end());
        rep (j, p[i].size()) {
            id[p[i][j].second] = ll(i+1)*1000000 + j+1;
        }
    }

    cout << setfill('0') << right;
    rep (i, M) {
        cout << setw(12) << id[i] << endl;
    }
    return 0;
}
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

    ll N, M, X, Y;
    cin >> N >> M >> X >> Y;

    vector<ll> x(N), y(M);
    rep (i, N) {
        cin >> x[i];
    }
    rep (i, M) {
        cin >> y[i];
    }

    sort(x.rbegin(), x.rend());
    sort(y.begin(), y.end());

    bool flag = false;
    for (ll i = X+1; i <= Y; i++) {
        if (x[0] < i && i <= y[0]) {
            flag = true;
        }
    }

    if (flag) {
        cout << "No War" << endl;
    } else {
        cout << "War" << endl;
    }
    return 0;
}

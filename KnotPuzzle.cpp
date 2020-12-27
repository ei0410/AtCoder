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

    ll N, L;
    cin >> N >> L;

    vector<ll> a(N);
    rep (i, N) {
        cin >> a[i];
    }

    bool flag = false;
    ll index = 0;
    rep (i, N-1) {
        if (a[i]+a[i+1] >= L) {
            flag = true;
            index = i;
        }
    }

    if (flag) {
        cout << "Possible" << endl;
        rep (i, index) {
            cout << i+1 << endl;
        }
        for (ll i = N-1; i > index; i--) {
            cout << i << endl;
        }
    } else {
        cout << "Impossible" << endl;
    }
    return 0;
}
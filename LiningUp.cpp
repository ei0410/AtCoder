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

    ll N;
    cin >> N;

    vector<ll> A(N);
    rep (i, N) {
        cin >> A[i];
    }

    map<ll, ll> m;
    rep (i, N) {
        m[A[i]]++;
    }

    ll ans = 1;
    if (N%2) {
        if (m[0] != 1) {
            cout << 0 << endl;
            return 0;
        }
        rep (i, N/2-1) {
            if (m[(i+1)*2] != 2) {
                cout << 0 << endl;
                return 0;
            }
        }
    } else {
        rep (i, N/2) {
            if (m[2*i+1] != 2) {
                cout << 0 << endl;
                return 0;
            }
        }
    }

    rep (i, N/2) {
        ans *= 2;
        ans %= MOD;
    }

    cout << ans << endl;
    return 0;
}
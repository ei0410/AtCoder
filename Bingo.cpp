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

    ll A[3][3];
    rep (i, 3) {
        rep (j, 3) {
            cin >> A[i][j];
        }
    }

    ll N;
    cin >> N;

    vector<ll> b(N);
    rep (i, N) {
        cin >> b[i];
    }

    bool ans[3][3];
    rep (i, 3) {
        rep (j, 3) {
            ans[i][j] = false;
        }
    }

    rep (k, N) {
        rep (i, 3) {
            rep (j, 3) {
                if (A[i][j] == b[k]) {
                    ans[i][j] = true;
                }
            }
        }
    }

    bool f = false;
    if (ans[0][0] && ans[1][1] && ans[2][2]) {
        f = true;
    }
    if (ans[0][2] && ans[1][1] && ans[2][0]) {
        f = true;
    }
    
    if (ans[0][0] && ans[1][0] && ans[2][0]) {
        f = true;
    }
    if (ans[0][1] && ans[1][1] && ans[2][1]) {
        f = true;
    }
    if (ans[0][2] && ans[1][2] && ans[2][2]) {
        f = true;
    }

    if (ans[0][0] && ans[0][1] && ans[0][2]) {
        f = true;
    }
    if (ans[1][0] && ans[1][1] && ans[1][2]) {
        f = true;
    }
    if (ans[2][0] && ans[2][1] && ans[2][2]) {
        f = true;
    }

    if (f) {
        Yes;
    } else {
        No;
    }

    return 0;
}
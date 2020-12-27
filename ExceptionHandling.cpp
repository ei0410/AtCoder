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

    ll memo = 0;
    ll index = 0;
    map<ll, ll> m;
    rep (i, N) {
        m[A[i]]++;
        if (A[i] > memo) {
            memo = A[i];
            index = i;
        }
    }

    ll sec = 0;
    if (m[memo] > 1) {
        rep (i, N) {
            cout << memo << endl;
        }
    } else {
        rep (i, N) {
            if (A[i] != memo) {
                sec = max(sec, A[i]);
            }     
        }
        rep (i, N) {
            if (A[i] == memo) {
                cout << sec << endl;
            } else {
                cout << memo << endl;
            }
        }
    }

    return 0;
}
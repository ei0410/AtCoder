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

    ll N, P;
    cin >> N >> P;

    vector<ll> A(N);
    rep (i, N) {
        cin >> A[i];
    }

    ll odd = 0;
    rep (i, N) {
        if (A[i]%2 != 0) {
            odd++;
        }
    }

    if (odd) {
        cout << setprecision(64) << pow(2, N-1) << endl;
    } else {
        if (P) {
            cout << 0 << endl;
        } else {
            cout << setprecision(64) << pow(2, N) << endl;
        }
    }
    return 0;
}
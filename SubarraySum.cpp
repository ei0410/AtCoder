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

    ll N, K, S;
    cin >> N >> K >> S;

    if (S < 1000000000) {
        rep (i, N) {
            if (i < K) {
                cout << S << " ";
            } else {
                cout << S+1 << " ";
            }
        }
    } else {
        rep (i, N) {
            if (i < K) {
                cout << S << " ";
            } else {
                cout << 1 << " ";
            }
        }
    }
    cout << endl;
    return 0;
}
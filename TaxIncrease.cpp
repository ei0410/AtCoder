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

    ll A, B;
    cin >> A >> B;

    vector<double> a(1010), b(1010);

    rep (i, 1001) {
        a[i] = floor(i*0.08);
        b[i] = floor(i*0.1);
    }

    rep (i, 1001) {
        if (A == a[i]) {
            rep (j, 1001) {
                if (B == b[i]) {
                    cout << i << endl;
                    return 0;
                }
            }
        }
    }

    cout << -1 << endl;
    return 0;
}
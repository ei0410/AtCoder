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

    ll N;
    cin >> N;

    ll b = 5;
    for (int i = 1; i <= 25; i++) {
        ll a = 1;
        for (int j = 1; j <= 37; j++) {
            if (a > (ll)1e18/3) {
                continue;
            }

            if (b > (ll)1e18) {
                continue;
            }

            a *= 3;
            if (a+b == N) {
                cout << j << " " << i << endl;
                return 0;
            }
        }
        
        b *= 5;
    }

    cout << -1 << endl;
    return 0;
}
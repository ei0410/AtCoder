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

    ll A, B, C, D, E, F;
    cin >> A >> B >> C >> D >> E >> F;

    ll ans1 = 0;
    ll ans2 = 0;
    double dense = 0;
    for (ll i = 0; i <= F; i+=A*100) {
        for (ll j = 0; j <= F; j+=B*100) {
            for (ll k = 0; k <= F; k+=C) {
                for (ll l = 0; l <= F; l+=D) {
                    double water = i+j;
                    double sugar = k+l;
                    double swater = water + sugar;

                    if (swater == 0 || swater > F || swater*E < (100+E)*sugar) {
                        continue;
                    }

                    double tmp = sugar/swater;
                    if (dense <= tmp) {
                        dense = tmp;
                        ans1 = swater;
                        ans2 = sugar;
                    }
                }
            }
        }
    }

    cout << ans1 << " " << ans2 << endl;
    return 0;
}

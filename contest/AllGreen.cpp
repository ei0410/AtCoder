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

#define rep(i, n) for (ll i = 0; i < n; i++)

int main(int argc, char *argv[])
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    ll D, G;
    cin >> D >> G;

    vector<ll> p(D), c(D);
    rep (i, D) {
        cin >> p[i] >> c[i];
    }

    ll ans = 0;
    for (ll bit = 0; bit < (1<<D); bit++) {
        ll point = 0;
        ll count = 0;
        for (ll i = 0; i < D; i++) {
            if (bit & (1<<i)) {
                point += (i+1)*100*p[i] + c[i]; 
                count += p[i];
            }
        }
        cout << point << " " << count << endl;
    }

    return 0;
}
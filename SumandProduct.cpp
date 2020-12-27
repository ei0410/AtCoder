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
#define rrep(i, n) for (ll i = (n)-1; i >= 0; i--)

vector<ll> Divisor(ll n) {
    vector<ll> res;
    for (ll i = 1; i*i <= n; i++) {
        if (n%i == 0) {
            res.push_back(i);
            if (i != n/i) {
                res.push_back(n/i);
            }
        }
    }
    sort(res.begin(), res.end());
    return res;
}

int main(void)
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    ll S, P;
    cin >> S >> P;

    vector<ll> div = Divisor(P);

    ll siz = ll(div.size());
    if (siz%2 == 0) {
        rep (i, siz/2) {
            if (div[i]+div[siz-(i+1)] == S) {
                Yes;
                return 0;
            }
        }
    } else {
        rep (i, siz/2+1) {
            if (div[i]+div[siz-(i+1)] == S) {
                Yes;
                return 0;
            }
        }
    }

    No;
    return 0;
}
#include <bits/stdc++.h> 

using namespace std;

#define YES cout << "YES" << endl;
#define NO  cout << "NO"  << endl;
#define Yes cout << "Yes" << endl;
#define No  cout << "No"  << endl;
 
#define INF INT_MAX
#define LLINF LLONG_MAX
#define MOD 1000000007
#define PI  acos(-1)

using ll  = long long;
using ull = unsigned long long;
using Pii = pair<int, int>;
using Pll = pair<ll, ll>;

#define rep(i, n) for (ll i = 0; i < n; i++)
#define rrep(i, n) for (ll i = (n)-1; i >= 0; i--)

template<class T> inline bool chmin(T& a, T b) {
    if (a > b) {
        a = b;
        return true;
    }
    return false;
}

template<class T> inline bool chmax(T& a, T b) {
    if (a < b) {
        a = b;
        return true;
    }
    return false;
}

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

    ll N;
    cin >> N;

    ll ans = 0;
    vector<ll> div = Divisor(N);
    reverse(div.begin(), div.end());
    rep (i, div.size()/2) {
        ll m = div[i]-1;
        if (N/m == N%m) {
            ans += m;
        }
    }
    cout << ans << endl;
    return 0;
}
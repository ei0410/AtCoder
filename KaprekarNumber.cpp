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

ll g1(ll x) {
    string tmp = to_string(x);
    
    sort(tmp.rbegin(), tmp.rend());
    ll val = stol(tmp);
    return val;
}

ll g2(ll x) {
    string tmp = to_string(x);
    
    sort(tmp.begin(), tmp.end());
    ll val = stol(tmp);
    return val;
}

ll f(ll x) {
    return g1(x)-g2(x);
}

int main(void)
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    ll N, K;
    cin >> N >> K;

    ll ans = N;
    rep (i, K) {
        ans = f(ans); 
    }

    cout << ans << endl;
    return 0;
}
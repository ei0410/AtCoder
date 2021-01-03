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

int main(void)
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    ll A, B, M;
    cin >> A >> B >> M;

    vector<ll> a(A), b(B);
    ll mina = INF;
    ll minb = INF;
    rep (i, A) {
        cin >> a[i];
        mina = min(mina, a[i]);
    }
    rep (i, B) {
        cin >> b[i];
        minb = min(minb, b[i]);
    }

    ll ans = INF;
    rep (i, M) {
        ll x, y, c;
        cin >> x >> y >> c;
        x--;
        y--;
        ans = min(ans, a[x]+b[y]-c);
    }
    
    cout << min(ans, mina+minb) << endl;
    return 0;
}
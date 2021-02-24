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

    ll X, Y, A, B, C;
    cin >> X >> Y >> A >> B >> C;

    vector<ll> p(A), q(B), r(C);
    rep (i, A) {
        cin >> p[i];
    }
    rep (i, B) {
        cin >> q[i];
    }
    rep (i, C) {
        cin >> r[i];
    }
    sort(p.rbegin(), p.rend());
    sort(q.rbegin(), q.rend());
    sort(r.rbegin(), r.rend());

    vector<ll> apples;
    rep (i, X) {
        apples.push_back(p[i]);
    }
    rep (i, Y) {
        apples.push_back(q[i]);
    }
    rep (i, r.size()) {
        apples.push_back(r[i]);
    }
    sort(apples.rbegin(), apples.rend());

    ll ans = 0;
    rep (i, X+Y) {
        ans += apples[i];
    }

    cout << ans << endl;
    return 0;
}
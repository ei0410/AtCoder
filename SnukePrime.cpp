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

    ll N, C;
    cin >> N >> C;

    map<ll, ll> m;
    rep (i, N) {
        ll a, b, c;
        cin >> a >> b >> c;
        m[a] += c;
        m[b+1] -= c;
    }

    ll ans = 0;
    ll sum = 0;
    ll pre_index = 0;
    for (auto it : m) {
        ans += min(C, sum) * (it.first-pre_index);
        sum += it.second;
        pre_index = it.first;
    }

    cout << ans << endl;
    return 0;
}
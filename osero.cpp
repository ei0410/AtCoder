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

    ll N, Q;
    cin >> N >> Q;

    vector<ll> table(200100, 0);
    
    rep (i, Q) {
        ll l, r;
        cin >> l >> r;
        l--;
        table[l]++;
        table[r]--;
    }

    rep (i, table.size()) {
        if (i > 0) {
            table[i] += table[i-1];
        }
    }

    string ans = "";
    rep (i, N) {
        if (table[i]%2 == 0) {
            ans += '0';
        } else {
            ans += '1';
        }
    }

    cout << ans << endl;
    return 0;
}
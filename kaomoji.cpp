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

    string S;
    cin >> S;
    vector<ll> a(S.size()+1, 0);
    rep (i, S.size()) {
        if (S[i] == '<') {
            chmax(a[i+1], a[i]+1);
        }
    }

    rrep (i, S.size()) {
        if (S[i] == '>') {
            chmax(a[i], a[i+1]+1);
        }
    }

    ll ans = 0;
    rep (i, a.size()) {
        ans += a[i];
    }

    cout << ans << endl;
    return 0;
}
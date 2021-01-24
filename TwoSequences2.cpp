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

    ll N;
    cin >> N;

    vector<ll> a(N);
    rep (i, N) {
        cin >> a[i];
    }
    vector<ll> b(N);
    rep (i, N) {
        cin >> b[i];
    }

    vector<ll> ans(N);

    ll max_a = a[0];
    ans[0] = a[0]*b[0];

    rep (i, N-1) {
        max_a = max(max_a, a[i+1]);
        ans[i+1] = max(ans[i], max_a * b[i+1]);
    }

    rep (i, N) {
        cout << ans[i] << endl;
    }
    return 0;
}
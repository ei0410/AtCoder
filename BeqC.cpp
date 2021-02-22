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

    vector<ll> L(N), R(N);
    rep (i, N) {
        cin >> L[i] >> R[i];
    }

    rep (i, N) {
        ll base = L[i];
        ll diff = R[i]-L[i];
        if (base > diff) {
            cout << 0 << endl;
        } else {
            ll l = R[i]-diff-L[i]+1;
            ll r = R[i]-base-L[i]+1;
            cout << (l+r)*(r-l+1)/2 << endl;
        }
    }
    return 0;
}
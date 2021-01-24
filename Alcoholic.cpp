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

    ll N, X;
    cin >> N >> X;

    vector<ll> V(N), P(N);
    rep (i, N) {
        cin >> V[i] >> P[i];
    }

    X *= 100;
    ll alc = 0;
    rep (i, N) {
        alc  += (V[i] * P[i]);
        if (alc > X) {
            cout << i+1 << endl;
            return 0;
        }
    }

    cout << -1 << endl;
    return 0;
}
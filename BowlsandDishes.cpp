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

    ll N, M;
    cin >> N >> M;

    vector<ll> A(M), B(M);
    rep (i, M) {
        cin >> A[i] >> B[i];
        A[i]--;
        B[i]--;
    }
    ll K;
    cin >> K;
    vector<ll> C(K), D(K);
    rep (i, K) {
        cin >> C[i] >> D[i];
        C[i]--;
        D[i]--;
    }

    ll ans = 0;
    rep (bit, (1<<K)) {
        vector<ll> v(110, 0);
        rep (i, K) {
            if (bit & (1<<i)) {
                v[C[i]]++;
            } else {
                v[D[i]]++;
            }
        }

        ll cnt = 0;
        rep (i, M) {
            if (v[A[i]] != 0 && v[B[i]] != 0) {
                cnt++;
            }
        }

        ans = max(cnt, ans);
    }

    cout << ans << endl;
    return 0;
}
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

    ll N, M, K;
    cin >> N >> M >> K;

    vector<ll> a(1), b(1);
    rep (i, N) {
        ll A;
        cin >> A;
        a.push_back(a[i]+A);
    }
    rep (i, M) {
        ll B;
        cin >> B;
        b.push_back(b[i]+B);
    }

    ll ans = 0;
    ll j = M;

    rep (i, N+1) {
        if (a[i] > K) {
            break;
        }
        while (b[j] > K - a[i]) {
            j -= 1;
        }
        ans = max(ans, i+j);
    }

    cout << ans << endl;
    return 0;
}
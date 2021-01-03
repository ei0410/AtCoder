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

ll GCD(ll a, ll b) {
    if (a%b == 0) {
        return b;
    } else {
        return GCD(b, a%b);
    }
}

ll LCM(ll a, ll b) {
    return a / GCD(a, b) * b;
}

int main(void)
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    ll N, M;
    cin >> N >> M;

    string S, T;
    cin >> S >> T;

    ll ans = LCM(N, M);
    ll tmp1 = ans/N;
    ll tmp2 = ans/M;
    ll step = LCM(tmp1, tmp2);
    ll index = 0;

    bool flag = true;
    while (index < ans) {
        ll memo1 = index/tmp1;
        ll memo2 = index/tmp2;
        if (S[memo1] != T[memo2]) {
            flag = false;
        }
        index += step;
    }

    if (flag) {
        cout << ans << endl;
    } else {
        cout << -1 << endl;
    }
    return 0;
}
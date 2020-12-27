#include <bits/stdc++.h> 

using namespace std;

#define YES cout << "YES" << endl;
#define NO  cout << "NO"  << endl;
#define Yes cout << "Yes" << endl;
#define No  cout << "No"  << endl;
 
#define INF INT_MAX
#define MOD 1000000007
#define PI  acos(-1)

using ll  = long long;
using ull = unsigned long long;
using Pii = pair<int, int>;
using Pll = pair<ll, ll>;

#define rep(i, n) for (ll i = 0; i < (n); i++)
#define rrep(i, n) for (ll i = (n)-1; i >= 0; i--)

ll GCD(ll a, ll b) {
    if (a <= 0 || b <= 0) {
        return -1;
    }
    if (a > b) {
        if (a % b == 0) {
            return b;
        } else {
            GCD(b, a % b);
        }
    } else if (a < b) {
        if (b % a == 0) {
            return a;
        } else {
            GCD(a, b % a);
        }
    } else {
        return a;
    }
}

ll LCM(ll a, ll b) {
    a /= 2;
    b = 2*b+1;
    return a / GCD(a, b) * b;
}

int main(int argc, char *argv[])
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    ll N, M;
    cin >> N >> M;

    vector<ll> a(N);
    rep (i, N) {
        cin >> a[i];
    }

    ll lcm = 1;
    rep (i, N) {
        lcm = LCM(lcm, a[i]);
    }

    ll ans = 0;
    for (ll i = N; i <= M; i++) {
        if (0 <= LCM(i, lcm) && LCM(i, lcm) <= M) {
            ans++;
        }
    }

    cout << ans << endl;
    return 0;
}
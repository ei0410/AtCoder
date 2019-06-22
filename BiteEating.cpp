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

#define rep(i, n) for (ll i = 0; i < n; i++)

int main(int argc, char *argv[])
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    ll N, L;
    cin >> N >> L;

    vector<ll> a(N);
    rep(i, N) {
        a[i] = L+i;
    }

    ll b = 500;
    ll tmp = 0;
    rep (i, N) {
        if (b > abs(a[i])) {
            b = abs(a[i]);
            tmp = a[i];
        }
    }

    ll ans = 0;
    rep (i, N) {
        ans += a[i];
    }

    cout << ans - tmp << endl;
    return 0;
}
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

    int N, x;
    cin >> N >> x;

    vector<int> a(N);
    rep (i, N) {
        cin >> a[i];
    }

    ll ans = 0;
    if (a[0] > x) {
        ans += (a[0] - x);
        a[0] = x;
    }

    for (int i = 0; i < N-1; i++) {
        if (a[i]+a[i+1] > x) {
            ans += (a[i] + a[i+1] - x);
            a[i+1] = x - a[i];
        }
    }

    cout << ans << endl;
    return 0;
}
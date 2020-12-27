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

int main(int argc, char *argv[])
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    ll N;
    cin >> N;

    vector<ll> a(N+1);
    for (ll i = 1; i < N+1; i++) {
        cin >> a[i];
    }

    vector<ll> ans(N+1, 0);
    for (ll i = N; i >= 1; i--) {
        ll tmp = 0;
        for (ll j = 2; j*i <= N; j++) {
            tmp += ans[j*i];
        }
        if (tmp%2 != a[i]) {
            ans[i] = 1;
        }
    }

    ll cnt = 0;
    rep (i, N+1) {
        if (ans[i]) {
            cnt++;
        }
    }

    cout << cnt << endl;
    rep (i, N+1) {
        if (ans[i]) {
            cout << i << " ";
        }
    }
    cout << endl;
    return 0;
}
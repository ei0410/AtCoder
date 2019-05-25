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

    ll N;
    cin >> N;

    vector<ll> A(N);
    rep (i, N) {
        cin >> A[i];
    }

    ll count = 0;
    rep (i, N) {
        if (A[i] < 0) {
            count++;
        }
    }

    ll tmp = MOD;
    ll ans = 0;
    rep (i, N) {
        ans += abs(A[i]);
        tmp = min(tmp, abs(A[i]));
    }

    if (count % 2 == 0) {
        cout << ans << endl;
    } else {
        cout << ans - 2*tmp << endl;
    }

    return 0;
}
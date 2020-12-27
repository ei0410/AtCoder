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

    ll K, N;
    cin >> K >> N;

    vector<ll> A(N);
    rep (i, N) {
        cin >> A[i];
    }

    vector<ll> diff(N);
    diff[0] = K - A[N-1] + A[0];
    for (int i = 1; i < N; i++) {
        diff[i] = A[i]-A[i-1];
    }

    ll m = 0;
    rep(i, N) {
        m = max(m, diff[i]);
    }

    ll ans = 0;
    rep (i, N) {
        ans += diff[i];
    }

    cout << ans - m << endl;
    return 0;
}
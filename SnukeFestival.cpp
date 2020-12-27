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

    vector<ll> A(N), B(N), C(N);
    rep (i, N) {
        cin >> A[i];
    }
    rep (i, N) {
        cin >> B[i];
    }
    rep (i, N) {
        cin >> C[i];
    }

    sort(A.begin(), A.end());
    sort(B.begin(), B.end());
    sort(C.begin(), C.end());

    ll ans = 0;
    rep (i, N) {
        auto it1 = lower_bound(A.begin(), A.end(), B[i]);
        auto it2 = upper_bound(C.begin(), C.end(), B[i]);
        ans += (it1-A.begin())*(C.end()-it2);
    }

    cout << ans << endl;
    return 0;
}
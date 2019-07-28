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

    vector<ll> A(N+1), B(N+1);
    rep (i, N+1) {
        cin >> A[i];
    }
    rep (i, N) {
        cin >> B[i];
    }
    B[N] = 0;

    ll ans = 0;
    rep (i, N) {
        if (A[i] > B[i]) {
            ans += B[i];
        } else {
            ans += A[i];
            ll tmp = B[i]-A[i];
            if (tmp > A[i+1]) {
                ans += A[i+1];
                A[i+1] = 0;
            } else {
                ans += tmp;
                A[i+1] -= tmp;
            }
        }
    }

    cout << ans << endl;
    return 0;
}

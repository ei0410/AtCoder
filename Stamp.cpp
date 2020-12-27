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

int main(void)
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    ll N, M;
    cin >> N >> M;

    if (M == 0) {
        cout << 1 << endl;
        return 0;
    }

    vector<ll> A(M);
    rep (i, M) {
        cin >> A[i];
    }

    sort(A.begin(), A.end());

    vector<ll> diff(M+1);
    diff[0] = A[0]-1;
    for (ll i = 1; i < M; i++) {
        diff[i] = A[i] - (A[i-1] + 1);
    }
    diff[M] = N - A[M-1];

    ll k = INF;
    rep (i, M+1) {
        if (diff[i] == 0) {
            continue;
        }
        k = min(k, diff[i]);
    }

    ll ans = 0;
    rep (i, M+1) {
        if (diff[i] == 0) {
            continue;
        }
        ans += (diff[i] + k - 1) / k;
    }

    cout << ans << endl;
    return 0;
}
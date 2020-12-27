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

    ll N, W;
    cin >> N >> W;

    vector<ll> S(N), T(N), P(N);
    rep (i, N) {
        cin >> S[i] >> T[i] >> P[i];
    }

    vector<ll> a(1000000, 0);
    rep (i, N) {
        a[S[i]] = a[S[i]] + P[i];
        a[T[i]] = a[T[i]] - P[i];
    }

    vector<ll> sum(1000001, 0);
    rep (i, 1000000) {
        sum[i+1] = sum[i] + a[i];
    }

    rep (i, 1000001) {
        if (W < sum[i]) {
            No;
            return 0;
        }
    }
    
    Yes;
    return 0;
}
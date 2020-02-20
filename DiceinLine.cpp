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

    ll N, K;
    cin >> N >> K;

    vector<ll> p(N);
    rep (i, N) {
        cin >> p[i];
    }

    vector<double> sum(N+1);
    sum[0] = 0;
    rep (i, N) {
        sum[i+1] = sum[i]+p[i];
    }

    double ans = 0;
    for (int i = K; i <= N; i++) {
        ans = max(ans, sum[i]-sum[i-K]);
    }

    cout << fixed << setprecision(12) << (ans+K)/2.0 << endl;
    return 0;
}
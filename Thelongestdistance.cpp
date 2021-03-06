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

    vector<double> x(N), y(N);
    rep (i, N) {
        cin >> x[i] >> y[i];
    }

    double ans = 0;
    rep (i, N) {
        rep (j, N) {
            ans = max(ans, pow(pow(x[j]-x[i], 2)+pow(y[j]-y[i], 2), 0.5));
        }
    }

    cout << ans << endl;
    return 0;
}
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

    vector<double> v(N);
    rep (i, N) {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    double ans = (v[0]+v[1])/2;
    for (ll i = 2; i < N; i++) {
        ans = double(ans+v[i])/2;
    }

    cout << setprecision(15) << ans << endl;
    return 0;
}
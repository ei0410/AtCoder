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

    vector<double> d(N);
    rep (i, N) {
        cin >> d[i];
    }

    sort(d.begin(), d.end());

    double ans1 = 0;
    rep (i, N) {
        ans1 += d[i];
    }

    double tmp = d[N-1];
    double ans2 = 0;
    double tmp2 = 0;
    rep (i, N-1) {
        tmp2 += d[i];
    }

    if (tmp2 < tmp) {
        ans2 = tmp - tmp2;
    } else {
        ans2 = 0;
    }

    cout << ans1 << endl;
    cout << ans2 << endl;
    return 0;
}
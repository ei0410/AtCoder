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

    ll n;
    cin >> n;

    vector<ll> a(n);
    rep (i, n) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    double ans1 = a[n-1];
    double ans2 = INF;
    double th = ans1/2;
    double memo = INF;
    rep (i, n-1) {
        if (abs(a[i]-th) < memo) {
            memo = abs(a[i]-th);
            ans2 = a[i];
        }
    }

    cout << ll(ans1) << " " << ll(ans2) << endl;
    return 0;
}
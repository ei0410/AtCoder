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

    vector<ll> a(N), b(N);
    rep (i, N) {
        cin >> a[i];
    }
    rep (i, N) {
        cin >> b[i];
    }

    ll cnt = 0;
    rep (i, N) {
        if (a[i] < b[i]) {
            cnt += (b[i]-a[i])/2;
        } else {
            cnt -= (a[i]-b[i]);
        }
    }

    if (cnt < 0) {
        No;
    } else {
        Yes;
    }
    return 0;
}
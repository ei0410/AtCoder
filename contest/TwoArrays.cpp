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

    vector<ll> a(N), b(N);
    rep (i, N) {
        cin >> a[i];
    }
    rep (i, N) {
        cin >> b[i];
    }

    ll asum = 0;
    ll bsum = 0;
    ll acount = 0;
    ll bcount = 0;
    rep(i, N) {
        sum += (b[i] - a[i]);
        if (a[i] > b[i]) {
            acount += (a[i] - b[i]);
        } else if (a[i] < b[i]) {
            bcount += (b[i] - a[i])/2;
        }
    }

    if (sum <= acount && sum <= bcount) {
        No
    } else {
        Yes
    }
    return 0;
}

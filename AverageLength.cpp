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

ll fact(ll n) {
    if (n < 0) {
        return -1;
    } else if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * fact(n - 1);
    }
}

int main(int argc, char *argv[])
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    ll N;
    cin >> N;

    vector<Pll> p;
    rep (i, N) {
        ll x, y;
        cin >> x >> y;
        p.push_back(make_pair(x, y));
    }

    sort(p.begin(), p.end());

    double sum = 0;
    do {
        rep (i, N-1) {
            sum += sqrt((p[i].first-p[i+1].first)*(p[i].first-p[i+1].first) + (p[i].second-p[i+1].second)*(p[i].second-p[i+1].second));
        }
    } while (next_permutation(p.begin(), p.end()));

    double n = fact(N);
    cout << setprecision(12) << sum/n << endl;
    return 0;
}
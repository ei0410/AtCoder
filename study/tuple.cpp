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
#define rrep(i, n) for (ll i = (n)-1; i >= 0; i--)

int main(void)
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    /*
    tuple<ll, ll, ll> t;

    cin >> get<0>(A) >> get<1>(A) >> get<2>(A);
    cout << get<0>(A) + get<1>(A) + get<2>(A) << endl;
    */

    ll N;
    vector<tuple<ll, ll, ll>> B;

    cin >> N;

    rep (i, N) {
        ll p1, p2, p3;
        cin >> p1 >> p2 >> p3;
        B.push_back(make_tuple(p1, p2, p3));
    }

    sort(B.begin(), B.end());

    rep (i, N) {
        cout << get<0>(B[i]) << " " << get<1>(B[i]) << " " << get<2>(B[i]) << endl;
    }
    return 0;
}
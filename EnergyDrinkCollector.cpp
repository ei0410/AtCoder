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

    ll N, M;
    cin >> N >> M;

    vector<Pll> p;
    for (ll i = 0; i < N; i++) {
        ll a, b;
        cin >> a >> b;
        p.push_back(make_pair(a, b));
    }

    sort(p.begin(), p.end());

    ll ans = 0;
    ll i = 0;
    while (M > 0) {
        if (M - p[i].second < 0) {
            ans += M*p[i].first;
            break;
        }
        ans += p[i].first*p[i].second;
        M -= p[i].second;
        i++;
    }

    cout << ans << endl;
    return 0;
}

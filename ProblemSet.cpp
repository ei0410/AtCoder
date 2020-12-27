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

    map<ll, ll> m;
    rep (i, N) {
        ll D;
        cin >> D;
        m[D]++;
    }

    ll M;
    cin >> M;
    rep (i, M) {
        ll T;
        cin >> T;
        m[T]--;
    }

    for (auto it : m) {
        if (it.second < 0) {
            NO;
            return 0;
        }
    }

    YES;
    return 0;
}
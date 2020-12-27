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

    map<ll, ll> m;
    rep (i, M) {
        ll a, b;
        cin >> a >> b;
        m[a]++;
        m[b]++;
    }

    bool flag = true;
    for (auto it : m) {
        if (it.second%2 != 0) {
            flag = false;
        }
    }

    if (flag) {
        YES;
    } else {
        NO;
    }
    return 0;
}
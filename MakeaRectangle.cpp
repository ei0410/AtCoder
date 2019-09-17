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
        ll A;
        cin >> A;
        m[A]++;
    }

    auto rbegin = m.rbegin();
    auto rend = m.rend();
    ll memo1 = 0;
    ll memo2 = 0;
    for (auto it = rbegin; it != rend; it++) {
        if (it->second >= 4 && !memo1 && !memo2) {
            memo1 = it->first;
            memo2 = it->first;
            break;
        } else if (it->second >= 2 && !memo1) {
            memo1 = it->first;
        } else if (it->second >= 2 && memo1) {
            memo2 = it->first;
            break;
        }
    }

    cout << memo1*memo2 << endl;
    return 0;
}
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

    map<string, ll> m;
    rep (i, N) {
        string s;
        cin >> s;
        m[s]++;
    }

    ll max_count = 0;
    for (map<string, ll>::iterator it = m.begin(), end = m.end(); it != end; it++) {
        max_count = max(max_count, it->second);
    }

    vector<string> v;
    for (map<string, ll>::iterator it = m.begin(), end = m.end(); it != end; it++) {
        if (max_count == it->second) {
            v.push_back(it->first);
        }
    }

    sort(v.begin(), v.end());
    rep (i, v.size()) {
        cout << v[i] << endl;
    }
    return 0;
}
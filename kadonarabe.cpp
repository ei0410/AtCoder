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

int main(void)
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    ll n, k;
    cin >> n >> k;

    vector<ll> v(n);
    rep (i, n) {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    set<string> st;
    do {
        string s = "";
        rep (i, k) {
            s += to_string(v[i]);
        }
        st.insert(s);
    } while (next_permutation(v.begin(), v.end()));

    cout << st.size() << endl;
    return 0;
}
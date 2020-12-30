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
    set<ll> s;

    // s.insert("key");
    s.insert(0);
    s.insert(set<ll>::value_type(0));
    s.insert(1);
    cout << s.size() << endl;

    for (set<ll>::iterator it = s.begin(), end = s.end(); it != end; it++) {
        cout << *it << endl;
    }

    cout << s.count(0) << endl;

    set<ll>::iterator it = s.find(0);
    if (it != s.end()) {
        cout << "found:" << *it << endl;
    }

    cout << s.erase(0) << endl;
    cout << s.erase(-1) << endl;
    cout << s.size() << endl;

    s.clear();
    cout << boolalpha << s.empty() << endl;

    /*
    auto itr = s.begin();
    ll K = 5;
    rep (i, K) {
        itr++;
    }
    cout << *itr << endl;
    */
    return 0;
}
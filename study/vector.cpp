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
    vector<ll> v(2);
    vector<ll> v2(2, 0);

    v.resize(4);
    v2.resize(4, 1);

    rep (i, v2.size()) {
        cout << v2[i] << endl;
    }

    cout << v2.front() << endl;
    cout << v2.back() << endl;

    v.clear();
    cout << v.size() << endl;
    cout << v.capacity() << endl;

    cout << boolalpha << v.empty() << endl;

    v.push_back(2);
    cout << v.size() << endl;
    cout << v.capacity() << endl;
    
    vector<char> vstr(4);
    vstr[0] = 's';
    vstr[1] = 't';
    vstr[2] = 'r';
    vstr[3] = '\0';
    cout << &vstr[0] << endl;

    rep (i, v2.size()) {
        cout << vstr[i] << endl;
    }
    cout << endl;

    vector<ll> vec{1, 2, 3, 2};
    cout << count(vec.begin(), vec.end(), 1) << endl;
    cout << count(vec.begin(), vec.end(), 2) << endl;
    cout << endl;

    vector<ll> x;
    x.push_back(11);
    x.push_back(7);
    x.push_back(3);
    x.push_back(4);
    x.push_back(8);

    vector<Pll> y;
    rep (i, x.size()) {
        y.push_back(Pll(x[i], i+1));
    }

    sort(y.begin(), y.end());
    for (vector<Pll>::iterator it = y.begin(); it != y.end(); ++it){
        cout << it->first << " " << it->second << endl;
    }
    return 0;
}
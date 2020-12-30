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
 
int main(void)
{
    map<string, ll> m;

    // m["key"] = value;
    m["one"] = 1;
    m["two"] = 2;
    m.insert(map<string, ll>::value_type("two", 2));
    cout << m.size() << endl;

    cout << m["one"] << endl;
    for (auto it : m) {
        cout << it.first << ":" << it.second << endl;
    }
    /*
    for (map<string, ll>::iterator it = m.begin(), end = m.end(); it != end; it++) {
        cout << it->first << ":" << it->second << endl;
    }
    */

    cout << m.count("one") << endl;

    map<string, ll>::iterator it = m.find("one");
    if (it != m.end()) {
        cout << "found: (" << it->first << "," << it->second << ")" << endl;
    }

    cout << m.erase("one") << endl;
    cout << m.erase("not_exist") << endl;
    cout << m.size() << endl; 

    m.clear();
    cout << boolalpha << m.empty() << endl;
    return 0;
}
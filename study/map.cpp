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
 
int main(int argc, char *argv[])
{
    map<string, int> m;

    // add elements
    // m["key"] = value;
    m["one"] = 1;
    m["two"] = 2;
    m.insert(map<string, int>::value_type("two", 2)); // same mean
    cout << m.size() << endl;

    cout << m["one"] << endl; // output value
    for (map<string, int>::iterator it = m.begin(), end = m.end(); it != end; it++) {
        cout << it->first << ":" << it->second << endl;
    }

    cout << m.count("one") << endl; // number of element in a key

    // search for value
    map<string, int>::iterator it = m.find("one");
    if (it != m.end()) {
        cout << "found: (" << it->first << "," << it->second << ")" << endl;
    }

    // erase
    cout << m.erase("one") << endl; // erased number of element
    cout << m.erase("not_exist") << endl; // if you pick no exist key, return value 0
    cout << m.size() << endl; 

    // clear
    m.clear();
    cout << boolalpha << m.empty() << endl;
    return 0;
}
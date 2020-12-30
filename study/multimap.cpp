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
    multimap<string, ll> mm;

    mm.insert(multimap<string, ll>::value_type("one", 1));
    mm.insert(multimap<string, ll>::value_type("one", -1));
    cout << mm.size() << endl;

    /*
    for (multimap<string, ll>::iterator it = mm.begin(), end = mm.end(); it != end; it++) {
        cout << it->first << ":" << it->second << endl;
    }
    */

    for (auto it : mm) {
        cout << it.first << ":" << it.second << endl;
    }

    cout << mm.count("one") << endl;

    multimap<string, ll>::iterator it = mm.find("one");
    if (it != mm.end()) {
        cout << "found: (" << it->first << "," << it->second << ")" << endl;
    }

    cout << mm.erase("one") << endl;
    cout << mm.erase("not_exist") << endl;
    cout << mm.size() << endl; 

    mm.clear();
    cout << boolalpha << mm.empty() << endl;
    return 0;
}
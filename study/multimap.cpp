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
    multimap<string, int> mm;

    // add elements
    // cannot use []
    mm.insert(multimap<string, int>::value_type("one", 1));
    mm.insert(multimap<string, int>::value_type("one", -1));
    cout << mm.size() << endl;

    // output value
    for (multimap<string, int>::iterator it = mm.begin(), end = mm.end(); it != end; it++) {
        cout << it->first << ":" << it->second << endl;
    }

    cout << mm.count("one") << endl; // number of element in a key

    // search for value
    multimap<string, int>::iterator it = mm.find("one");
    if (it != mm.end()) {
        cout << "found: (" << it->first << "," << it->second << ")" << endl;
    }

    // erase
    cout << mm.erase("one") << endl; // erased number of element
    cout << mm.erase("not_exist") << endl; // if you pick no exist key, return value 0
    cout << mm.size() << endl; 

    // clear
    mm.clear();
    cout << boolalpha << mm.empty() << endl;
    return 0;
}
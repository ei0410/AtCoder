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
    set<int> s;

    // add elements
    // s.insert("key");
    s.insert(0);
    s.insert(set<int>::value_type(0));
    s.insert(1);
    cout << s.size() << endl;

    // output value
    for (set<int>::iterator it = s.begin(), end = s.end(); it != end; it++) {
        cout << *it << endl;
    }

    cout << s.count(0) << endl; // number of elements in a key

    // search for value
    set<int>::iterator it = s.find(0);
    if (it != s.end()) {
        cout << "found:" << *it << endl;
    }

    // erase 
    cout << s.erase(0) << endl; // erased number of elements
    cout << s.erase(-1) << endl; // if you pick no exist key, return value 0
    cout << s.size() << endl;

    // clear
    s.clear();
    cout << boolalpha << s.empty() << endl;
    return 0;
}
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
    multiset<int> ms;

    // add elements
    // s.insert("key");
    ms.insert(0);
    ms.insert(multiset<int>::value_type(0));
    cout << ms.size() << endl;

    // output value
    for (multiset<int>::iterator it = ms.begin(), end = ms.end(); it != end; it++) {
        cout << *it << endl;
    }

    cout << ms.count(0) << endl; // number of elements in a key

    // search for value
    multiset<int>::iterator it = ms.find(0);
    if (it != ms.end()) {
        cout << "found:" << *it << endl;
    }

    // erase 
    cout << ms.erase(0) << endl; // erased number of elements
    cout << ms.erase(-1) << endl; // if you pick no exist key, return value 0
    cout << ms.size() << endl;

    // clear
    ms.clear();
    cout << boolalpha << ms.empty() << endl;
    return 0;
}
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
    multiset<ll> ms;

    ms.insert(0);
    ms.insert(multiset<ll>::value_type(0));
    cout << ms.size() << endl;

    for (multiset<ll>::iterator it = ms.begin(), end = ms.end(); it != end; it++) {
        cout << *it << endl;
    }


    cout << ms.count(0) << endl;

    multiset<ll>::iterator it = ms.find(0);
    if (it != ms.end()) {
        cout << "found:" << *it << endl;
    }

    cout << ms.erase(0) << endl;
    cout << ms.erase(-1) << endl;
    cout << ms.size() << endl;

    ms.clear();
    cout << boolalpha << ms.empty() << endl;
    return 0;
}
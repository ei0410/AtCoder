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
    list<ll> lst;

    cout << lst.size() << endl;

    lst.push_front(1);
    lst.push_back(1);

    lst.pop_front();
    lst.pop_back();

    lst.clear();
    cout << lst.size() << endl;
    cout << boolalpha << lst.empty() << endl;

    lst.resize(1, -1);
    lst.resize(3, -2);
    lst.resize(2);

    for (list<ll>::iterator it = lst.begin(), end = lst.end(); it != end; it++) {
        cout << *it << endl;
    }

    cout << lst.front() << endl;
    cout << lst.back() << endl;

    list<ll>::iterator pos = lst.begin();
    lst.insert(pos, -3);
    for (list<ll>::iterator it = lst.begin(), end = lst.end(); it != end; it++) {
        cout << *it << endl;
    }

    cout << *pos << endl;
    lst.erase(pos);
    for (list<ll>::iterator it = lst.begin(), end = lst.end(); it != end; it++) {
        cout << *it << endl;
    }

    lst.push_back(0);
    lst.erase(++lst.begin(), lst.end());
    for (list<ll>::iterator it = lst.begin(), end = lst.end(); it != end; it++) {
        cout << *it << endl;
    }

    list<ll> other(5, 1);
    lst.splice(lst.begin(), other, other.begin(), other.end());
    for (list<ll>::iterator it = lst.begin(), end = lst.end(); it != end; it++) {
        cout << *it << endl;
    }
    for (list<ll>::iterator it = other.begin(), end = other.end(); it != end; it++) {
        cout << *it << endl;
    }

    lst.push_front(-2);
    lst.sort();
    //lst.sort(greater<int>());

    lst.unique();
    for (list<ll>::iterator it = lst.begin(), end = lst.end(); it != end; it++) {
        cout << *it << endl;
    }
    return 0;
}
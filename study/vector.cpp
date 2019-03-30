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
    vector<int> v(2);
    vector<int> v2(2, 0);

    v.resize(4);
    v2.resize(4, 1);

    for (int i = 0; i < v2.size(); i++) {
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
    for (int i = 0; i < v2.size(); i++) {
        cout << vstr[i] << endl;
    }
    return 0;
}
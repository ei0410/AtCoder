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
    deque<ll> dq;

    dq.push_back(0);
    dq.push_back(1);
    cout << dq.size() << endl;
    cout << dq.at(0) << endl;
    cout << dq[1] << endl;
    cout << dq.front() << endl;
    cout << dq.back() << endl;
    
    dq.push_front(-1);
    dq.pop_back();
    cout << dq.size() << endl;
    cout << dq.at(0) << endl;
    cout << dq[1] << endl;
    cout << dq.front() << endl;
    cout << dq.back() << endl;

    dq.push_back(1);
    dq.pop_front();
    cout << dq.size() << endl;
    cout << dq.at(0) << endl;
    cout << dq[1] << endl;
    cout << dq.front() << endl;
    cout << dq.back() << endl;

    dq.clear();
    cout << dq.size() << endl;
    cout << boolalpha << dq.empty() << endl;
    return 0;
}
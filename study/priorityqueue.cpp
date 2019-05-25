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
    priority_queue<int> pq;
    // priority_queue<int, vector<int>, greater<int>> pq;

    pq.push(3);
    pq.push(1);
    pq.push(2);

    while(!pq.empty()) {
        cout << pq.top() << " " << flush;
        pq.pop();
    }
    cout << endl;
    return 0;
}
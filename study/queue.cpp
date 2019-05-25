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
    queue<int> q;

    q.push(1);
    q.push(2);
    q.push(3);

    /*
    //BFS
    while (!q.empty()) {
        int n = q.front();
        q.pop();

        if (...) {
            q.push(...);
        }
    }
    */

    cout << q.size() << endl;

    cout << q.front() << endl;
    cout << q.back() << endl;
    q.pop();
    cout << q.front() << endl;
    cout << q.back() << endl;
    q.pop();
    cout << q.front() << endl;
    cout << q.back() << endl;
    q.pop();

    cout << boolalpha << q.empty() << endl;
    return 0;
}
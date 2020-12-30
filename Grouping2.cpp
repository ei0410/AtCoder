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

#define rep(i, n) for (ll i = 0; i < n; i++)

int main(int argc, char *argv[])
{
    int x, y;
    cin >> x >> y;

    int a[12] = {1, 2, 1, 3, 1, 3, 1, 1, 3, 1, 3, 1};
    if (a[x-1] == a[y-1]) {
        Yes
    } else {
        No
    }
    return 0;
}
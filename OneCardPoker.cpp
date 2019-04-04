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
    cin.tie(0);
    ios::sync_with_stdio(false);

    int A, B;
    cin >> A >> B;

    if (A == 1 && B == 1) {
        cout << "Draw" << endl;
        return 0;
    } else if (A == 1) {
        cout << "Alice" << endl;
        return 0;
    } else if (B == 1) {
        cout << "Bob" << endl;
        return 0;
    }

    if (A > B) {
        cout << "Alice" << endl;
    } else if (A < B) {
        cout << "Bob" << endl;
    } else {
        cout << "Draw" << endl;
    }
    return 0;
}
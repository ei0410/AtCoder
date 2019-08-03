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

#define rep(i, n) for (ll i = 0; i < (n); i++)
#define rrep(i, n) for (ll i = (n)-1; i >= 0; i--)

int main(int argc, char *argv[])
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    ll A, B;
    cin >> A >> B;

    if (A == B) {
        cout << B << endl;
        return 0;
    }

    ll tmp = (B-A)/2;        
    if (A%2==0 && B%2==0) {
        if (tmp%2) {
            cout << (B^1) << endl;
        } else {
            cout << B << endl;
        }
    } else if (A%2==0 && B%2 == 1) {
        if (tmp%2) {
            cout << 0 << endl;
        } else {
            cout << 1 << endl;
        }
    } else if (A%2==1 && B%2 == 0) {
        if (tmp%2) {
            cout << (A^B^1) << endl;
        } else {
            cout << (A^B) << endl;
        }
    } else if (A%2==1 && B%2 == 1) {
        if (tmp%2) {
            cout << (A^1) << endl;
        } else {
            cout << A << endl;
        }
    }
    return 0;
}
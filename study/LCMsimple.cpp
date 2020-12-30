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
#define rrep(i, n) for (ll i = (n)-1; i >= 0; i--)

ll GCD(ll a, ll b) {
    if (a%b == 0) {
        return b;
    } else {
        return GCD(b, a%b);
    }
}

ll LCM(ll a, ll b) {
    return a / GCD(a, b) * b;
}

int main(void)
{
    cout << LCM(24, 36) << endl;
    return 0;
}
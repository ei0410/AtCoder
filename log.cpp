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

int main(void)
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    ull n;
    cin >> n;

    if (n == 1 || n == 2) {
        cout << 1 << endl;
        return 0;
    }

    ull i = 0;
    ull sum = 0;
    while (sum <= n+1) {
        i++;
        sum = i*(i+1)/2;
    }

    cout << n-i+2 << endl;
    return 0;
}
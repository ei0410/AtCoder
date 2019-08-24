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

    ll ans = 0;
    ll C = abs(A-B);
    while(C >= 10) {
        ans++;
        C -= 10;
    }

    if (C == 9 || C == 6 || C == 4 || C == 2) {
        cout << ans+2 << endl;
    } else if (C == 8 || C == 7 || C == 3) {
        cout << ans+3 << endl;
    } else if (C == 5 || C == 1) {
        cout << ans+1 << endl;
    } else {
        cout << ans << endl;
    }
    return 0;
}
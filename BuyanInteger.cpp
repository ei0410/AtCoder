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

ll digit(ll num) {
    ll cnt = 0;
    while (num > 0) {
        num /= 10;
        cnt++;
    }

    return cnt;
}

int main(int argc, char *argv[])
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    ll A, B, X;
    cin >> A >> B >> X;

    /*
    ll N = 10;
    while (A*pow(10, N-1)+B*(N-1) >= X) {
        N--;
    }

    if (N == 0) {
        cout << 0 << endl;
        return 0;
    }

    if (N == 10) {
        cout << 1000000000 << endl;
        return 0;
    }

    cout << (X-B*N)/A << endl;
    */

    ll left = 0;
    ll right = 1000000001; 

    ll ans = 0;
    while (1) {
        ans = (right + left) / 2;

        if (A*ans+B*digit(ans) > X) {
            right = ans;
        } else {
            left = ans;
        }

        if (right-left == 1) {
            ans = left;
            break;
        }
    }
    
    cout << ans << endl;
    return 0;
}
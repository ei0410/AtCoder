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

bool ten(ll n) {
    while (n > 0) {
        if (n%10 == 7) {
            return false;
        }
        n /= 10;
    }
    return true;
}

bool eight(ll n) {
    while (n > 0) {
        if (n%8== 7) {
            return false;
        }
        n /= 8;
    }
    return true;
}

int main(void)
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    ll N;
    cin >> N;

    ll ans = 0;
    for (ll i = 1; i <= N; i++) {
        if (ten(i) && eight(i)) {
            ans++;
        }
    }

    cout << ans << endl;
    return 0;
}
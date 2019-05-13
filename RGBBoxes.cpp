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

    ll R, G, B, N;
    cin >> R >> G >> B >> N;

    ll ans = 0;
    for (int i = 0; i <= 3000; i++) {
        for (int j = 0; j <= 3000; j++) {
            ll tmp = N - i*R - j*G;
            if (tmp >= 0 && tmp % B == 0) {
                ans++;
            }
        }
    }

    cout << ans << endl;
    return 0;
}
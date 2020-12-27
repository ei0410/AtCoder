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

    ll N;
    cin >> N;

    N = 1000 - N;
    ll ans = 0;
    while (N >= 500) {
        N -= 500;
        ans++;
    }
    while (N >= 100) {
        N -= 100;
        ans++;
    }
    while (N >= 50) {
        N -= 50;
        ans++;
    }
    while (N >= 10) {
        N -= 10;
        ans++;
    }
    while (N >= 5) {
        N -= 5;
        ans++;
    }
    while (N >= 1) {
        N -= 1;
        ans++;
    }

    cout << ans << endl;
    return 0;
}
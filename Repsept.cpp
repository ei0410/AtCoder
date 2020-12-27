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

    ll K;
    cin >> K;

    vector<ll> v(1000010, 0);
    v[1] = 7%K;

    for (ll i = 2; i <= K; i++) {
        v[i] = (v[i-1]*10+7)%K;
    }

    for (ll i = 1; i <= K; i++) {
        if (v[i] == 0) {
            cout << i << endl;
            return 0;
        }
    }

    cout << -1 << endl;
    return 0;
}
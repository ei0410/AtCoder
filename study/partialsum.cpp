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

int main(void)
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    ll N;
    cin >> N;

    vector<ll> a(N);
    rep (i, N) {
        cin >> a[i];
    }

    ll K;
    cin >> K;

    bool exist = false;
    rep (bit, (1<<N)) {
        ll sum = 0;
        rep(i, N) {
            if (bit & (1<<i)) {
                sum += a[i];
            }
        }

        if (sum == K) {
            exist = true;
        }
    }

    if (exist) {
        Yes
    } else {
        No
    }
    return 0;
}
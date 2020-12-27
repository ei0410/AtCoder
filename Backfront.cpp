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

    ll N;
    cin >> N;

    vector<ll> P(N);
    rep (i, N) {
        cin >> P[i];
        P[i]--;
    }

    rep (i, N-1) {
        if (P[i] > P[i+1]) {
            break;
        }
        if (i == N-2) {
            cout << 0 << endl;
            return 0;
        }
    }

    vector<ll> Q(200010);
    rep (i, N) {
        Q[P[i]] = i;
    }

    ll ans = 1;
    ll cnt = 1;
    rep (i, N-1) {
        ans = max(ans, cnt);
        if (Q[i] < Q[i+1]) {
            cnt++;
        } else {
            cnt = 1;
        }
    }

    cout << N-ans << endl;
    return 0;
}
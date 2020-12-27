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

    ll N, C, K;
    cin >> N >> C >> K;

    vector<ll> T(N);
    rep (i, N) {
        cin >> T[i];
    }

    sort(T.begin(), T.end());

    ll ans = N;
    ll cnt = C-1;
    ll t = T[0];
    for (ll i = 1; i < N; i++) {
        if (T[i]-t <= K && cnt > 0) {
            ans--;
            cnt--;
        } else {
            cnt = C-1;
            t = T[i];
        }
    }

    cout << ans << endl;
    return 0;
}
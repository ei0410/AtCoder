#include <bits/stdc++.h> 

using namespace std;

#define YES cout << "YES" << endl;
#define NO  cout << "NO"  << endl;
#define Yes cout << "Yes" << endl;
#define No  cout << "No"  << endl;
 
#define INF INT_MAX
#define LLINF LLONG_MAX
#define MOD 1000000007
#define PI  acos(-1)

using ll  = long long;
using ull = unsigned long long;
using Pii = pair<int, int>;
using Pll = pair<ll, ll>;

#define rep(i, n) for (ll i = 0; i < n; i++)
#define rrep(i, n) for (ll i = (n)-1; i >= 0; i--)

template<class T> inline bool chmin(T& a, T b) {
    if (a > b) {
        a = b;
        return true;
    }
    return false;
}

template<class T> inline bool chmax(T& a, T b) {
    if (a < b) {
        a = b;
        return true;
    }
    return false;
}

using Graph = vector<vector<ll>>;

int main(void)
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    ll N, M;
    cin >> N >> M;

    vector<ll> A(N);
    rep (i, N) {
        cin >> A[i];
    }

    Graph G(N);
    rep (i, M) {
        ll X, Y;
        cin >> X >> Y;
        X--;
        Y--;
        G[X].push_back(Y);
    }

    vector<ll> dp(N, INF);
    ll ans = -INF;

    rep (i, N) {
        ans = max(ans, A[i]-dp[i]);

        for (auto next : G[i]) {
            chmin(dp[next], dp[i]);
            chmin(dp[next], A[i]);
        }
    }

    cout << ans << endl;
    return 0;
}
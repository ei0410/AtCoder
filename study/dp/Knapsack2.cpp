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

const int MAX_N = 110;
const int MAX_V = 100100;

int main(int argc, char *argv[])
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    // input values
    ll N, W;
    cin >> N >> W;

    vector<ll> w(N), v(N);
    rep (i, N) {
        cin >> w[i] >> v[i];
    }

    // dp table
    vector<vector<ll>> dp(MAX_N, vector<ll>(MAX_V, INF));

    // init dp table

    // init condition
    dp[0][0] = 0;

    // loop
    rep (i, N) {
        rep (sum_v, MAX_V) {
            if (sum_v - v[i] >= 0) {
                chmin(dp[i+1][sum_v], dp[i][sum_v-v[i]]+w[i]);
            }
            chmin(dp[i+1][sum_v], dp[i][sum_v]);
        }
    }

    ll ans = 0;
    rep (sum_v, MAX_V) {
        if (dp[N][sum_v] <= W) {
            ans = sum_v;
        }
    }

    cout << ans << endl;
    return 0;
}
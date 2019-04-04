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

int main(int argc, char *argv[])
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    // input values
    int N, K;
    cin >> N >> K;

    vector<int> h(N);
    rep (i, N) {
        cin >> h[i];
    }

    // dp table
    vector<int> dp(100100, INF);

    // init dp table

    // init condition
    dp[0] = 0;

    // loop
    rep (i, N) {
        for (int j = 1; j <= K; j++) {
            chmin(dp[i+j], dp[i]+abs(h[i+j]-h[i]));
        }
    }

    cout << dp[N-1] << endl;
    return 0;
}
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

#define MAX_N 110000

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
    // dp table
    // init dp table
    // init condition
    // loop

    ll N;
    cin >> N;

    vector<ll> dp(MAX_N, N);

    dp[0] = 0;

    priority_queue<Pll, vector<Pll>, greater<Pll>> que;
    que.push(make_pair(0, 0));

    while (!que.empty()) {
        ll cur = que.top().first;
        ll v = que.top().second;
        que.pop();

        if (cur > dp[v]) {
            continue;
        }

        for (ll pow6 = 1; v+pow6 <= N; pow6 *= 6) {
            ll nv = v+pow6;
            if (chmin(dp[nv], dp[v]+1)) {
                que.push(make_pair(dp[nv], nv));
            }
        }
        for (ll pow9 = 1; v+pow9 <= N; pow9 *= 9) {
            ll nv = v+pow9;
            if (chmin(dp[nv], dp[v]+1)) {
                que.push(make_pair(dp[nv], nv));
            }
        }
    }

    cout << dp[N] << endl;
    return 0;
}
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
#define rrep(i, n) for (ll i = (n)-1; i >= 0; i--)

#define MAX_X 100010

bool func(ll i, ll x, const vector<ll> &a, vector<vector<ll>> &dp) {
    if (i == 0) {
        if (x == 0) {
            return true;
        } else {
            return false;
        }
    }
    if (x < 0) {
        return false;
    }

    if (dp[i][x] != -1) {
        return dp[i][x];
    }

    if (func(i-1, x, a, dp)) {
        return dp[i][x] = 1;
    }

    if (func(i-1, x-a[i-1], a, dp)) {
        return dp[i][x] = 1;
    }

    return dp[i][x] = 0;
}

int main(int argc, char *argv[])
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    ll N, X;
    cin >> N >> X;

    vector<ll> a(N);
    rep (i, N) {
        cin >> a[i];
    }

    vector<vector<ll>> dp(N+1, vector<ll>(MAX_X, -1));
    if (func(N, X, a, dp)) {
        Yes;
    } else {
        No;
    }
    return 0;
}
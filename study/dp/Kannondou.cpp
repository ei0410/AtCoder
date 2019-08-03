#include <bits/stdc++.h> 

using namespace std;
#define MAX_N 31

/*
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
*/

int main(int argc, char *argv[])
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    // input values
    vector<int> vec;
    int i = 0;
    for (i = 0; i < MAX_N; i++) {
        int n;
        cin >> n;
        if (n == 0) {
            break;
        }
        vec.push_back(n);
    }

    // dp table
    vector<int> dp(MAX_N, 0);

    // init dp table
    // ok

    // init condition
    dp[0] = 1;
    dp[1] = 1;
    dp[2] = 2;

    // loop
    for (i = 0; i < MAX_N; i++) {
        dp[i+3] = dp[i]+dp[i+1]+dp[i+2];
    }

    for (i = 0; i < vec.size(); i++) {
        cout << dp[vec[i]]/3650+1 << endl;
    }
    return 0;
}
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

<<<<<<< HEAD
double dp[1480];

int main(void)
=======
#define MAX_N 10000

ll memo[MAX_N + 1];

ll fib(ll n) {
    if (n <= 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else if (n == 2) {
        return 1;
    }

    if (memo[n] != 0) {
        return memo[n];
    }

    return fib(n - 1) + fib(n - 2);
}
 
int main(int argc, char *argv[])
>>>>>>> origin/master
{
    ll N;
    cin >> N;

<<<<<<< HEAD
    dp[0] = 0;
    dp[1] = 1;
    rep (i, N) {
        dp[i+2] = dp[i+1] + dp[i];
    }

    cout << dp[N] << endl;
=======
    cout << fib(N) << endl;
>>>>>>> origin/master
    return 0;
}
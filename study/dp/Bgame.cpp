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

int main(void)
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    ll A, B;
    cin >> A >> B;

    vector<ll> a(A), b(B);
    rep (i, A) {
        cin >> a[i];
    }
    rep (i, B) {
        cin >> b[i];
    }

    ll dp[1010][1010];

    rep (i, 1010) {
        rep (j, 1010) {
            dp[i][j] = 0;
        }
    }
    
    dp[A][B] = 0;

    for (int i = A; i >= 0; i--) {
        for (int j = B; j >= 0; j--) {
            if (i == A && j == B) {
                continue;
            }
            if ((i+j)%2 == 0) {
                if (i == A) {
                    dp[i][j] = b[j] + dp[i][j+1];
                } else if (j == B) {
                    dp[i][j] = a[i] + dp[i+1][j];
                } else {
                    dp[i][j] = max(dp[i+1][j]+a[i], dp[i][j+1]+b[j]);
                }
            } else {
                if (i == A) {
                    dp[i][j] = dp[i][j+1];
                } else if (j == B) {
                    dp[i][j] = dp[i+1][j];
                } else {
                    dp[i][j] = min(dp[i+1][j], dp[i][j+1]);
                }
            }
        }
    }

    cout << dp[0][0] << endl;
    return 0;
}
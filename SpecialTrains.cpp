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

    vector<ll> C(N-1), S(N-1), F(N-1);
    rep (i, N-1) {
        cin >> C[i] >> S[i] >> F[i];
    }

    vector<ll> ans(N);
    rep (i, N) {
        ll t = 0;
        for (int j = i; j < N-1; j++) {
            if (t < S[j]) {
                t = S[j];
            } else if (t%F[j] == 0) {
                ;
            } else {
                t = t+F[j]-t%F[j];
            }
            t += C[j];
        }
        ans[i] = t;
    }

    rep (i, N) {
        cout << ans[i] << endl;
    }
    return 0;
}

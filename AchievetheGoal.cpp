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

    ll N, K, M;
    cin >> N >> K >> M;

    ll sum = 0;
    rep (i, N-1) {
        ll A;
        cin >> A;
        sum += A;
    }

    if (N*M-sum <= K) {
        if (N*M-sum >= 0) {
            cout << N*M-sum << endl;
        } else {
            cout << 0 << endl;
        }
    } else {
        cout << -1 << endl;
    }
    return 0;
}
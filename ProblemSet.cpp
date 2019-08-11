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
    vector<ll> D(N);
    rep (i, N) {
        cin >> D[i];
    }

    ll M;
    cin >> M;
    vector<ll> T(M);
    rep (i, M) {
        cin >> T[i];
    }

    vector<ll> m(200010, 0);
    rep (i, M) {
        m[T[i]]--;
    }

    rep (i, N) {
        m[D[i]]++;
    }

    rep (i, N) {
        if (m[i] < 0) {
            NO;
            return 0;
        }
    }

    YES;
    return 0;
}
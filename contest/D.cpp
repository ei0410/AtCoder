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

#define MAX_N 200

int main(int argc, char *argv[])
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    int N, M, R;
    cin >> N >> M >> R;

    vector<int> r(R);
    rep (i, R) {
        cin >> r[i];
    }

    vector<vector<int>> d(M, vector<int>(M, INF));

    rep (i, M) {
        int A, B, C;
        cin >> A >> B >> C;
        d[A][B] = C;
    }

    rep (i, N) {
        rep (j, N) {
            rep (k, N) {
                d[j][k] = min(d[j][j], d[j][i] + d[i][k]);
            }
        }
    }

    cout << d[N-1][N-1] << endl;
    return 0;
}
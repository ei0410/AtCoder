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

    int N, D;
    cin >> N >> D;

    vector<vector<double>> vv(N, vector<double>(D, 0));
    for (ll i = 0; i < N; i++) {
        for (ll j = 0; j < D; j++) {
            cin >> vv[i][j];
        }
    }

    int ans = 0;
    for (int i = 0; i < N; i++) {
        for (int j = i; j < N; j++) {
            if (i == j) {
                continue;
            }
            double tmp = 0;
            for (int k = 0; k < D; k++) {
                tmp += pow(abs(vv[i][k]-vv[j][k]), 2);
            }
            tmp = pow(tmp, 0.5);
            if (ceil(tmp) == floor(tmp)) {
                ans++;
            }
        }
    }

    cout << ans << endl;
    return 0;
}
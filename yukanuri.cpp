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

    vector<string> S(N);
    rep (i, N) {
        cin >> S[i];
    }

    ll red = 0;
    ll blue = 0;
    rep (i, N) {
        rep (j, S[i].size()) {
            if (S[i][j] == 'R') {
                red++;
            } else if (S[i][j] == 'B') {
                blue++;
            }
        }
    }

    if (red > blue) {
        cout << "TAKAHASHI" << endl;
    } else if (red < blue) {
        cout << "AOKI" << endl;
    } else {
        cout << "DRAW" << endl;
    }
    return 0;
}
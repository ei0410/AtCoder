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

int main(int argc, char *argv[])
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    int N;
    cin >> N;

    vector<int> V(N), C(N);
    rep (i, N) {
        cin >> V[i];
    }
    rep (i, N) {
        cin >> C[i];
    }

    int ans = -MOD;
    for (int bit = 0; bit < (1<<N); bit++) {
        int X = 0;
        int Y = 0;
        for (int i = 0; i < N; i++) {
            if (bit & (1<<i)) {
                X += V[i];
                Y += C[i];
            }
        }
        ans = max(ans, X-Y);
    }

    cout << ans << endl;
    return 0;
}
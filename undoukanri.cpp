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

    int L, H, N;
    cin >> L >> H >> N;

    vector<int> A(N);
    rep (i, N) {
        cin >> A[i];
    }

    rep (i, N) {
        if (L <= A[i] && H >= A[i]) {
            cout << 0 << endl;
        } else if (L > A[i]) {
            cout << L - A[i] << endl;
        } else {
            cout << -1 << endl;
        }
    }
    return 0;
}
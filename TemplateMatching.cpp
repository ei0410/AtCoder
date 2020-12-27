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

    int N, M;
    cin >> N >> M;

    vector<string> A(N), B(M);
    rep (i, N) {
        cin >> A[i];
    }
    rep (i, M) {
        cin >> B[i];
    }

    rep (i, N-M+1) {
        rep (j, N-M+1) {
            bool flag = true;
            rep (k, M) {
                rep (l, M) {
                    if (A[i+k][j+l] != B[k][l]) {
                        flag = false;
                    }
                }
            }
            if (flag) {
                Yes
                return 0;
            }
        }
    }

    No
    return 0;
}
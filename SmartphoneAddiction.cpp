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

    ll N, M, T;
    cin >> N >> M >> T;

    vector<ll> A(M), B(M);
    rep (i, M) {
        cin >> A[i] >> B[i];
    }

    vector<ll> pl(M), mi(M);
    rep (i, M) {
        pl[i] = B[i]-A[i];
    }

    mi[0] = A[0];
    for (int i = 1; i < M; i++) {
        mi[i] = A[i]-B[i-1];
    }

    ll ma = N;
    rep (i, M) {
        N -= mi[i];
        if (N <= 0) {
            No;
            return 0;
        }

        N += pl[i];
        if (N >= ma) {
            N = ma;
        }
    }

    N -= (T-B[M-1]);
    if (N <= 0) {
        No;
        return 0;
    }

    Yes;
    return 0;
}
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

    ll N, K, Q;
    cin >> N >> K >> Q;

    vector<ll> A(Q);
    vector<ll> m(100010, 0);
    rep (i, Q) {
        cin >> A[i];
        A[i]--;
        m[A[i]]++;
    }

    rep (i, N) {
        if (m[i] > Q-K) {
            Yes;
        } else {
            No;
        }
    }

    return 0;
}
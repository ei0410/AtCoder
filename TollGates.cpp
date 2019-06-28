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

    ll N, M, X;
    cin >> N >> M >> X;

    vector<ll> A(M);
    rep (i, M) {
        cin >> A[i];
    }

    vector<ll> count(N+1);
    rep (i, M) {
        count[A[i]]++;
    }

    ll left = 0;
    ll right = 0;
    rep (i, X) {
        if (count[i] == 1) {
            left++;
        }
    }
    for (ll i = X+1; i < N; i++) {
        if (count[i] == 1) {
            right++;
        }
    }

    cout << min(left, right) << endl;
    return 0;
}
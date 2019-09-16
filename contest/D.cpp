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

    ll N, M;
    cin >> N >> M;

    vector<ll> A(N);
    rep (i, N) {
        cin >> A[i];
    }

    sort(A.rbegin(), A.rend());

    vector<ll> cnt(N);
    ll ans = 0;
    rep (i, N) {
        ll tmp = 0;
        while (A[i] > 0) {
            A[i] /= 2;
            tmp++;
        }
        if (tmp < 0) {
            tmp = 0;
        }
        cnt[i] = tmp;
    }

    rep (i, N) {
        cout << cnt[i] << endl;
    }
    return 0;
}
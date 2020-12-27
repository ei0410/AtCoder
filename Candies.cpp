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

    vector<ll> A1(N);
    vector<ll> A2(N);
    rep (i, N) {
        cin >> A1[i];
    }
    rep (i, N) {
        cin >> A2[i];
    }

    if (N == 1) {
        cout << A1[0]+A2[0] << endl;
        return 0;
    }

    ll sum = A1[0];
    rep (i, N) {
        sum += A2[i];
    }

    ll ans = 0;
    rep (i, N-1) {
        ans = max(ans, sum);
        sum += (A1[i+1]-A2[i]);
    }

    cout << ans << endl;
    return 0;
}
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

    vector<ll> A(N);
    rep (i, N) {
        cin >> A[i];
    }

    map<ll, ll> m;
    rep (i, N) {
        m[A[i]]++;
    }

    ll sum = 0;
    for (auto it : m) {
        sum += it.second * (it.second-1)/2;
    }

    rep (i, N) {
        ll ans = sum;
        ans -= m[A[i]]*(m[A[i]]-1)/2;
        ans += (m[A[i]]-1)*(m[A[i]]-2)/2;
        cout << ans << endl;
    }

    return 0;
}
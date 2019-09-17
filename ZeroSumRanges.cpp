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

    vector<ll> s(N+1, 0);
    map<ll, ll> m;
    rep (i, N) {
        s[i+1] = s[i] + A[i];
    }

    rep (i, N+1) {
        m[s[i]]++;
    }

    ll ans = 0;
    for (auto it : m) {
        ans += it.second*(it.second-1)/2;
    }

    cout << ans << endl;
    return 0;
}
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

    ll N, Q;
    cin >> N >> Q;

    string S;
    cin >> S;

    vector<ll> s(N+1, 0);
    rep (i, N) {
        if (i+1 < N && S[i] == 'A' && S[i+1] == 'C') {
            s[i+1] = s[i] + 1;
        } else {
            s[i+1] = s[i];
        }
    }

    rep (i, Q) {
        ll l, r;
        cin >> l >> r;
        cout << s[r-1] - s[l-1] << endl;
    }
    return 0;
}
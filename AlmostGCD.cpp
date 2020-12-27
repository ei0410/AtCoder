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

    ll N;
    cin >> N;

    vector<ll> A(N);
    rep (i, N) {
        cin >> A[i];
    }

    vector<ll> p(1010, 0);
    for (int i = 2; i <= 1000; i++) {
        rep (j, N) {
            if (A[j]%i == 0) {
                p[i]++;
            }
        }
    }

    ll m = 0;
    ll index = 0;
    rep (i, p.size()) {
        if (m < p[i]) {
            m = p[i];
            index = i;
        }
    }

    cout << index << endl;
    return 0;
}
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

    vector<ll> X(N);
    rep (i, N) {
        cin >> X[i];
    }

    vector<ll> tmp(N);
    copy(X.begin(), X.end(), tmp.begin());

    sort(tmp.begin(), tmp.end());

    ll first  = tmp[N/2-1];
    ll second = tmp[N/2];

    rep (i, N) {
        if (X[i] <= first) {
            cout << second << endl;
        } else if (X[i] >= second) {
            cout << first << endl;
        }
    }
    return 0;
}

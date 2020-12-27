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

    ll memo = 0;
    rep (i, N) {
        memo = max(memo, A[i]);
    }

    bool flag = false;
    ll cnt = 0;
    ll second = 0;
    rep (i, N) {
        if (memo != A[i]) {
            second = max(second, A[i]);
        } else {
            cnt++;
        }
    }

    if (cnt >= 2) {
        flag = true;
    }

    rep (i, N) {
        if (flag) {
            cout << memo << endl;
        } else {
            if (A[i] == memo) {
                cout << second << endl;
            } else {
                cout << memo << endl;
            }
        }
    }
    return 0;
}
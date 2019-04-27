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

    string S;
    cin >> S;

    vector<ll> num(S.size());
    rep (i, S.size()) {
        num[i] = S[i] - '0';
    }

    int n = S.size()-1;

    ll sum = 0;
    for (int bit = 0; bit < (1<<n); bit++) {
        for (int i = 0; i < n; i++) {
            ll tmp = 0;
            if (bit & (1<<i)) {

            } else {
                
            }
        }
    }

    cout << sum << endl;
    return 0;
}
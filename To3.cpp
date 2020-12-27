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

int main(void)
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    string N;
    cin >> N;

    ll n = N.size();
    vector<ll> v(3);

    rep (i, n) {
        v[(N[i]-'0')%3]++;
    }

    ll sum = 0;
    rep (i, 3) {
        sum += v[i]*i;
    }
    sum %= 3;

    if (sum == 0) {
        cout << 0 << endl;
    } else if (sum == 1) {
        if (v[1] != 0) {
            if (n == 1) {
                cout << -1 << endl;
            } else {
                cout << 1 << endl;
            }
        } else {
            if (n == 2) {
                cout << -1 << endl;
            } else {
                cout << 2 << endl;
            }
        }
    } else if (sum == 2) {
        if (v[2] != 0) {
            if (n == 1) {
                cout << -1 << endl;
            } else {
                cout << 1 << endl;
            }
        } else {
            if (n == 2) {
                cout << -1 << endl;
            } else {
                cout << 2 << endl;
            }
        }
    }

    return 0;
}
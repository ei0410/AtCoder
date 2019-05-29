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

#define MAX_N 100000

bool IsPrime(ll num) {
    if (num < 2) {
        return false;
    } else if (num == 2) {
        return true;
    } else if (num % 2 == 0) {
        return false;
    }

    double sqrtNum = sqrt(num);
    for (ll i = 3; i <= sqrtNum; i+=2) {
        if (num % i == 0) {
            return false;
        }
    }

    return true;
}

int main(int argc, char *argv[])
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    ll Q;
    cin >> Q;

    vector<ll> a(MAX_N, 0);
    for (ll i = 0; i <= MAX_N; i++) {
        if (IsPrime(i) && IsPrime((i+1)/2)) {
            a[i] = 1;
        } else {
            a[i] = 0;
        }
    }

    vector<ll> s(MAX_N+1, 0);
    for (ll i = 0; i <= MAX_N+1; i++) {
        s[i+1] = s[i] + a[i];
    }

    rep (i, Q) {
        ll l, r;
        cin >> l >> r;
        cout << s[r+1] - s[l] << endl;
    }

    return 0;
}
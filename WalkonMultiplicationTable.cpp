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

#define MAX_N 100100

ll GCD(ll a, ll b) {
    if (a <= 0 || b <= 0) {
        return -1;
    }
    if (a > b) {
        if (a % b == 0) {
            return b;
        } else {
            GCD(b, a % b);
        }
    } else if (a < b) {
        if (b % a == 0) {
            return a;
        } else {
            GCD(a, b % a);
        }
    } else {
        return a;
    }
}

bool IsPrime(int n) {
    for (ll i = 2; i*i <= n; i++) {
        if (n%i == 0) {
            return false;
        }
    }
    return n != 1;
}

ll prime[MAX_N];
bool is_prime[MAX_N+1];
ll sieve(ll n) {
    ll p = 0;
    rep (i, n+1) {
        is_prime[i] = true;
    }
    is_prime[0] = is_prime[1] = false;
    for (ll i = 2; i <= n; i++) {
        if (is_prime[i]) {
            prime[p++] = i;
            for (ll j = 2*i; j <= n; j += i) {
                is_prime[j] = false;
            }
        }
    }
    return p;
}

vector<ll> Divisor(ll n) {
    vector<ll> res;
    for (ll i = 1; i*i <= n; i++) {
        if (n%i == 0) {
            res.push_back(i);
            if (i != n/i) {
                res.push_back(n/i);
            }
        }
    }
    sort(res.begin(), res.end());
    return res;
}

int main(int argc, char *argv[])
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    ll N;
    cin >> N;

    vector<ll> div = Divisor(N);
    /*
    rep (i, div.size()) {
        cout << div[i] << " ";
    }
    cout << endl;
    */

    ll ans = 10000000000000;
    if (div.size()%2 == 0) {
        rep (i, div.size()/2) {
            ans = min(ans, div[i]+div[div.size()-i-1]-2);
        }
    } else {
        rep (i, div.size()/2+1) {
            ans = min(ans, div[i]+div[div.size()-i-1]-2);
        }
    }

    cout << ans << endl;
    return 0;
}
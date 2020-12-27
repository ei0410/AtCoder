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

vector<bool> IsPrime;

void sieve(size_t max) {
    if (max+1 > IsPrime.size()) {
        IsPrime.resize(max+1, true);
    }
    IsPrime[0] = false;
    IsPrime[1] = false;

    for (size_t i = 2; i*i <= max; i++) {
        if (IsPrime[i]) {
            for (size_t j = 2; i*j <= max; j++) {
                IsPrime[i*j] = false;
            }
        }
    }
}

int main(int argc, char *argv[])
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    ll X;
    cin >> X;

    ll N = 100100;
    sieve(N);

    for (ll i = 0; i < IsPrime.size(); i++) {
        if (IsPrime[i]) {
            if (i >= X) {
                cout << i << endl;
                return 0;
            }
        }
    }
    return 0;
}
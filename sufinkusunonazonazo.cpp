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

    ll N, M;
    cin >> N >> M;

    ll adult, child, old;
    adult = -1;
    old   = -1;
    child = -1;
    
    for (ll i = 0; i <= N; i++) {
        ll k = N-i; 
        if (k < 0) {
            continue;
        }
        ll total = i*2 + 0*3 + k*4;
        if (total == M) {
            adult = i;
            old   = 0;
            child = k;
        }
    }
    N -= 1;
    for (ll i = 0; i <= N; i++) {
        ll k = N-i; 
        if (k < 0) {
            continue;
        }
        ll total = i*2 + 1*3 + k*4;
        if (total == M) {
            adult = i;
            old   = 1;
            child = k;
        }
    }

    cout << adult << " " << old << " " << child << endl;
    return 0;
}

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

    for (ll i = 1; i <= 3500; i++) {
        for (ll j = 1; j <= 3500; j++) {
            if (4*i*j-N*i-N*j == 0) {
                continue;
            }
            double k = double(N*i*j)/double(4*i*j-N*i-N*j);
            if (k > 0 && ceil(k) == floor(k)) {
                cout << i << " " << j << " " << ll(k) << endl;
                return 0;
            }
        }
    }
    return 0;
}
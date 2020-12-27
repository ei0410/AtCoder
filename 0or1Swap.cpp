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

    vector<ll> p(N);
    rep (i, N) {
        cin >> p[i];
    }

    rep (k, N-1) {
        if (p[k] > p[k+1]) {
            break;
        }
        if (k == N-2) {
            YES;
            return 0;
        }
    }

    rep (i, N) {
        for (ll j = i+1; j < N; j++) {
            vector<ll> vec(N);
            copy(p.begin(), p.end(), vec.begin());
            ll tmp = vec[i];
            vec[i] = vec[j];
            vec[j] = tmp;
            rep (k, N-1) {
                if (vec[k] > vec[k+1]) {
                    break;
                }
                if (k == N-2) {
                    YES;
                    return 0;
                }
            }
        }
    }

    NO;
    return 0;
}

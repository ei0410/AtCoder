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

    vector<ll> b(N);
    rep (i, N) {
        cin >> b[i];
    }

    vector<ll> a;
    rep (i, N) {
        rrep (j, b.size()) {
            if (b[j] == j+1) {
                a.push_back(j+1);
                b.erase(b.begin()+j);
                break;
            }
        }
    }

    if (a.size() == N) {
        rrep (i, N) {
            cout << a[i] << endl;
        }
    } else {
        cout << -1 << endl;
    }

    return 0;
}
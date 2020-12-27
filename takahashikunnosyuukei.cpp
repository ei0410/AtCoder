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

    ll cnt = N;
    double sum = 0;
    rep (i, N) {
        ll A;
        cin >> A;
        if (A) {
            sum += A;
        } else {
            cnt--;
        }
    }

    if (cnt) {
        cout << ceil(sum/cnt) << endl;
    } else {
        cout << 0 << endl;
    }
    return 0;
}
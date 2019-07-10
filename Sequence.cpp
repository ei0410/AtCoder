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

    int n;
    cin >> n;

    vector<int> a(n+1, 0);
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }

    ll even = 0;
    ll sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += a[i];
        if (i % 2 == 0) {
            if (sum >= 0) {
                even += abs(sum)+1;
                sum = -1;
            }
        } else {
            if (sum <= 0) {
                even += abs(sum)+1;
                sum = 1;
            }
        }
    }

    ll odd = 0;
    sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += a[i];
        if (i % 2 != 0) {
            if (sum >= 0) {
                odd += abs(sum)+1;
                sum = -1;
            }
        } else {
            if (sum <= 0) {
                odd += abs(sum)+1;
                sum = 1;
            }
        }
    }

    cout << min(even, odd) << endl;
    return 0;
}
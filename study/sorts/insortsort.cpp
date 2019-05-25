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

int main(int argc, char *argv[])
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n = 10;
    cin >> n;

    vector<int> a(n);
    rep (i, n) {
        cin >> a[i];
    }

    rep(i, n) {
        cout << a[i] << endl;
    }

    for (int i = 1; i < n; i++) {
        int v = a[i];

        int j = i;

        for (; j > 0; --j) {
            if (a[j-1] > v) {
                a[j] = a[j-1];
            } else {
                break;
            }
        }

        a[j] = v;
    }

    rep (i, n) {
        cout << a[i] << endl;
    }
    return 0;
}
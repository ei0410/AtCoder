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

const int MAX = 100000;

int main(int argc, char *argv[])
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n;
    cin >> n;

    vector<int> a(n);
    rep (i, n) {
        cin >> a[i];
    }
    rep (i, n) {
        cout << a[i] << endl;
    }

    int num[MAX] = {0};
    rep (i, n) {
        num[a[i]]++;
    }

    int sum[MAX] = {0};
    for (int v = 1; v < MAX; v++) {
        sum[v] = sum[v-1] + num[v];
    }

    vector<int> sorted(n);
    for (int i = n-1; i >= 0; i--) {
        sorted[sum[a[i]]--] = a[i];
    }

    rep (i, n) {
        cout << a[i] << endl;
    }
    return 0;
}
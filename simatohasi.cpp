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

    int N;
    cin >> N;

    vector<int> a(N);
    rep (i, N) {
        cin >> a[i];
    }

    int sum = 0;
    rep (i, N) {
        sum += a[i];
    }
    if (sum%N != 0) {
        cout << -1 << endl;
        return 0;
    }

    int ans = 0;
    int tmp = 0;
    int cnt = 0;
    rep (i, N) {
        tmp += a[i];
        cnt++;
        if (!(tmp%cnt) && tmp/cnt == sum/N) {
            ans += (cnt-1);
            cnt = 0;
            tmp = 0;
        }
    }

    cout << ans << endl;
    return 0;
}
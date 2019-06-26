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

    ll N;
    cin >> N;

    vector<ll> a(N);
    rep (i, N) {
        cin >> a[i];
    }

    ll ans = 0;
    ll right = 0;
    ll sum = 0;
    for (ll left = 0; left < N; left++) {
        // while(right < N && check()) {
        while(right < N && (sum + a[right]) == (sum ^ a[right])) {
            sum += a[right];
            right++;
        }

        ans += right-left;
        if (left == right) {
            right++;
        } else {
            sum -= a[left];
        }
    }

    cout << ans << endl;
    return 0;
}
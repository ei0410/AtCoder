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

    ll N, K;
    cin >> N >> K;

    vector<ll> a(N);
    rep (i, N) {
        cin >> a[i];
    }

    ll right = 0;
    ll ans = 0;
    ll sum = 0;
    for (int left = 0; left < N; left++) {
        while (right < N && sum < K) {
            sum += a[right];
            right++;
        }
        if (sum < K) {
            break;
        }

        ans += (N-right+1);

        if (right == left) {
            right++;
        } else {
            sum -= a[left];
        }
    }

    cout << ans << endl;
    return 0;
}
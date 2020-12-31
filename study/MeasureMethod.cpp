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
#define rrep(i, n) for (ll i = (n)-1; i >= 0; i--)

int main(void)
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    ll N, K;
    cin >> N >> K;

    vector<ll> a(N);
    rep (i, N) {
        cin >> a[i];
    }

    ll ans = 0;
    ll right = 0;
    ll cur = 0;

    rep (left, N) {
        // while(right < N && check()) {
        while(right < N && cur <= K){
            cur += a[right];
            right++;
        }

        ans += right-left;
        if (left == right) {
            right++;
        } else {
            cur -= a[right];
        }
    }

    cout << ans << endl;
    return 0;
}
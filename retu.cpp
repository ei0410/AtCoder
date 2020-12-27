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

    rep (i, N) {
        if (a[i] == 0) {
            cout << N << endl;
            return 0;
        }
    }

    ll ans = 0;
    ll right = 0;
    ll cur = 1;
    for (ll left = 0; left < N; left++) {
        // while(right < N && check()) {
        while(right < N && cur*a[right] <= K){
            cur *= a[right];
            right++;
        }

        ans = max(ans, right-left);

        if (right == left) {
            right++;
        } else {
            cur /= a[left];
        }
    }

    cout << ans << endl;
    return 0;
}
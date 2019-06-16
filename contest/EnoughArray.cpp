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

    ll res = 0;
    ll right = 1;
    for (ll left = 0; left < N; left++) {
        ll sum = 0;
        ll tmp = right;
        while (tmp < N && left < tmp && sum < K) {
            sum += a[tmp];
            tmp++;
        }
        res += (N-tmp+1);
        right++;
    }

    cout << res << endl;
    return 0;
}
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

    vector<ll> bucket(5, 0);
    rep (i, N) {
        char c;
        cin >> c;
        bucket[c-'0']++;
    }

    ll ans1 = max(bucket[1], max(bucket[2], max(bucket[3], bucket[4])));
    ll ans2 = min(bucket[1], min(bucket[2], min(bucket[3], bucket[4])));

    cout << ans1 << " " << ans2 << endl;
    return 0;
}
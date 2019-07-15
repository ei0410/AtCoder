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

vector<ll> enum_div(ll n)
{
    vector<ll > ret;
    for (ll i = 1; i*i <= n; i++) {
        if (n % i == 0) {
            ret.push_back(i);
            ret.push_back(n/i);
        }
    }

    sort(ret.begin(), ret.end());
    return ret;
}

int main(int argc, char *argv[])
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    int N;
    cin >> N;

    int ans = 0;
    for (int i = 1; i <= N; i++) {
        if (i%2 != 0) {
            vector<ll> cnt = enum_div(i);
            if (cnt.size() == 8) {
                ans++;
            }
        }
    }

    cout << ans << endl;
    return 0;
}
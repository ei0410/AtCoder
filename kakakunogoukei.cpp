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

ll binary(ll bin) {
    ll ans = 0;
    for (ll i = 0; bin > 0; i++) {
        ans += (bin%2)*pow(10, i);
        bin /= 2;
    }

    return ans;
}

int main(int argc, char *argv[])
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    ull n, X;
    cin >> n >> X;

    vector<ll> a(n);
    rep (i, a.size()) {
        cin >> a[i];
    }

    stringstream ss;
    ss << bitset<32>(X);

    string s = ss.str();
    reverse(s.begin(), s.end());
    string str = s.substr(0, n);

    ll ans = 0;
    rep (i, str.size()) {
        if (str[i] == '1') {
            ans += a[i];
        }
    }

    cout << ans << endl;
    return 0;
}
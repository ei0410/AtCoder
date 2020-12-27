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

    string O, E;
    cin >> O >> E;

    ll i = 0;
    string ans = "";
    if (O.size() == E.size()) {
        for (ll i = 0; i < E.size(); i++) {
            ans += O[i];
            ans += E[i];
        }
    } else {
        for (ll i = 0; i < E.size(); i++) {
            ans += O[i];
            ans += E[i];
        }
        ans += O[O.size()-1];
    }

    cout << ans << endl;
    return 0;
}
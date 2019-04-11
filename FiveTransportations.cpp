#include <bits/stdc++.h> 

using namespace std;

#define YES cout << "YES" << endl;
#define NO  cout << "NO"  << endl;
#define Yes cout << "Yes" << endl;
#define No  cout << "No"  << endl;
 
#define INF INT_MAX
#define LINF LONG_MAX
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

    vector<ll> a(5);
    rep (i, 5) {
        cin >> a[i];
    }
    
    ll minimam = LINF;
    ll index = 0;
    rep (i, 5) {
        if (minimam > a[i]) {
            minimam = a[i];
            index = i;
        }
    }

    cout << 5 + (N + minimam - 1) / minimam - 1 << endl;
    return 0;
}
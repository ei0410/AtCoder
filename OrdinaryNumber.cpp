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

    ll n;
    cin >> n;

    vector<ll> p(n);
    rep (i, n) {
        cin >> p[i];
    }

    set<ll> s;
    for (ll i = 1; i < n-1; i++) {
        vector<ll> tmp;
        tmp.push_back(p[i-1]);
        tmp.push_back(p[i]);
        tmp.push_back(p[i+1]);
        sort(tmp.begin(), tmp.end());

        if (tmp[1] == p[i]) {
            s.insert(p[i]);
        } 
    }

    cout << s.size() << endl;
    return 0;
}
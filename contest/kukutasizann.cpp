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

vector<ll> enum_div(ll n)
{
    vector<ll> ret;
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

    ll N;
    cin >> N;

    vector<ll> tmp = enum_div(2025-N);

    set<string> s;
    rep (i, tmp.size()) {
        if (tmp[i] <= 9 && tmp[tmp.size()-(i+1)] <= 9) {
            s.insert(to_string(tmp[i]) + " x " + to_string(tmp[tmp.size()-(i+1)]));
        }
    }

    for (auto it = s.begin(); it != s.end(); it++) {
        cout << *it << endl;
    }
    return 0;
}
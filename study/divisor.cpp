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
    ll N = 10;
    vector<ll> ans = enum_div(N);

    for (ll i = 0; i < ans.size(); i++) {
        cout << ans[i] << endl;
    }
    return 0;
}
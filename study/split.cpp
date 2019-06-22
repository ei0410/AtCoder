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

vector<string> split(string s, string delim) {
    vector<string> res;
    ll pos = 0;
    while (true) {
        ll found = s.find(delim, pos);
        if (found >= 0) {
            res.push_back(s.substr(pos, found - pos));
        } else {
            res.push_back(s.substr(pos));
            break;
        }
        pos = found + delim.size();
    }
    return res;
}
 
int main(int argc, char *argv[])
{
    string s = "a b c d e f g";
    string d = " ";
    vector<string> ans = split(s, d);
    rep (i, ans.size()) {
        cout << ans[i] << endl;
    }
    return 0;
}